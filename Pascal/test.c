#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "../jmp/jmpTest.c"  //跨文件调用

#include "Fibonacci.c"

static jmp_buf buf;


int main()
{
   
JmpExample();

   return 0;
}


