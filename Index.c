#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "jmp/jmpTest.c" //跨文件调用   //   ../jmp/jmpTest.c
#include "Pascal/Fibonacci.c"
#include "Struct/StructC.c"


#include "Class/Person.c"


int main()
{

char temp[] = "test chars";
for (size_t i = 0; i < sizeof(temp); i++)
{

    printf("Test  -  %c \n", temp[i]);
}

Person* p=new_Person("c","b");
p->Hello();
p->Display(p);
return 0;

}


