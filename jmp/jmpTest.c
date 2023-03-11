#include <setjmp.h>

static jmp_buf buf;

void secondCalling(void) {
    printf("second\n");         // 打印
    longjmp(buf,1);            // 跳回setjmp的调用处 - 使得setjmp返回值为1
}
 
void firstCalling(void) {
    secondCalling();
        printf("first\n"); // 不可能执行到此行
}


void JmpExample()
{
    if (!setjmp(buf) )    //setjmp()的调用默认返回0     !0即为true .
        firstCalling();       
 else                    // 当longjmp跳转回，setjmp返回1，因此进入此行
        printf("main\n");       // 打印


    return 0;
}