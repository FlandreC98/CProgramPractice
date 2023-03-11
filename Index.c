#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "jmp/jmpTest.c" //跨文件调用   //   ../jmp/jmpTest.c
#include "Pascal/Fibonacci.c"

int main()
{

int p [4] ={0,1,2,3};

Creat_FibonacciSequence_Ptr(p, 4);

//   JmpExample();

return 0;
}


