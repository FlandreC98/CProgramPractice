//演示了如何去定义结构体Cube
#include <stdio.h>

//#pragma pack(8)
struct Cube
{
    short lenght;
    short width;
    int xeg;
    long long xeg1;
    int xeg2;
    int xeg3;
    int xeg4;//---
};

// 注意，返回结构体与返回结构体的指针，本质上是不同的。
// 若结构体指针为ptr 则 *（ptr+1）实际上会产生 *(prt+sizeof(cube))的效果


/// @brief 此函数返回一个cube类型的指针。
struct Cube* ShowCube()
{
    struct Cube *cube =  (struct Cube*)(malloc(sizeof (struct Cube)));
    cube->lenght = 21;
    cube->width = 10;
    return cube;

}

/// @brief 此函数返回一个cube结构体。
struct  Cube show_cube1() {

    struct Cube a;
    a.lenght = 999;
    a.width = 1000;
    return a;
}


/// @brief 关于上述问题的测试用例。在main()中运行即可。
/// @return 
int TheCaseInStruct()
{

    printf ("=============== [struct Cube*]测试开始 ===============\n"); 

    struct Cube* ptrCube =ShowCube();
    printf ("ptrCube 的首指针的值 : %d\n",*((short*)(ptrCube)));
    printf("ptrCube 的首指针的地址 : %p\n", ((short *)(ptrCube)));

    printf ("struct Cube* -> lenght : %p\n", &ptrCube->lenght ); 
    printf ("struct Cube* -> width  : %p\n", &ptrCube->width ); 

/*
    那么此时会产生一个问题 [ptrCube] 与 [ptrCube+1] 的地址产生了28位偏移，28来自于[sizeof(cube)]
    用例如下。
    所以无法用 ptr+1  来访问同一个元素的不同属性。这会跳到下一个元素的地址中去。

    解法 : 取首位指针，转成（uintptr_t *），再加减需要的偏移量后再去取值即可。
    其实就是定义一个新的指针指向这个地址。详见[uintptr_t *] //自己百度。
*/
    printf ("uintptr_t   ptrCube : %p\n", (uintptr_t *)( ptrCube)); 
    printf ("uintptr_t   ptrCube : %p\n", (uintptr_t *)( ptrCube+1)); 

    printf ("各个数据的地址如下。\n"); 
    printf(" ----->   %d \n",&(ptrCube->lenght));
    printf(" ----->   %d \n",&(ptrCube->width));
    printf(" ----->   %d \n",&(ptrCube->xeg));
    printf(" ----->   %d \n",&(ptrCube->xeg1));
    printf(" ----->   %d \n",&(ptrCube->xeg2));

    printf ("通过[uintptr_t]  来指向某个地址。\n"); 
    uintptr_t temp_uintptr_t=  (uintptr_t *)( ptrCube);
    printf ("uintptr_t   -> : %d\n",*(short *)(temp_uintptr_t+2)); //寻找后2位。




    /*
    总结： 指针类型的加减是一个固定长度[x]，而x有多长，取决于这个类型的size。
    */

    printf ("=============== [struct Cube*]测试结束 ===============\n\n\n\n"); 
 



    printf ("=============== [struct Cube]测试开始 ===============\n"); 

struct Cube a = show_cube1();

struct Cude* b = &a;

void * ptr1 = (void *)(b);//此处转换成void*指针。
printf ("ccccc : %d\n",*(short *)(ptr1)); 
printf ("ccccc : %d\n",*(short *)(ptr1+2)); 
printf ("ccccc : %p\n",ptr1); 
printf ("ccccc : %p\n",ptr1+2); 


//如果不转成void*指针。则会报错。理由跟上面一样。

// printf ("ccccc : %d\n",b); 
// printf ("ccccc : %d\n",*(b+1)); //这么做破坏了结构。



    printf ("=============== [struct Cube]测试结束 ===============\n"); 



/*关于对齐
#pragma pack(8)
按照从前向后数，会将两个 short 与一个int 进行合并
末尾如果不够，则自动补齐 ，并算入sizeof 中。
*/

    return 0;
}
