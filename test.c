#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   /* 一个指向整数的指针 */

   int p[4] = {1, 2, 3, 4};
   printf(" p  lenght : %d \n", sizeof(p));
   for (int i = 0; i < 10; i++)
   {

      printf("  -   %d   \n", p[i]);
   }

   printf(" over ");

   CreatFibonacciSequence(10);

   return 0;
}

int CreatFibonacciSequence(int lenght)
{
   // int temp[lenght];
   double *ptr = malloc(sizeof(int) * lenght);    //      2/lenght

   printf(" sizeof : %d \n", sizeof(*ptr));


   ptr[0] = 1;
   ptr[1] = 1;
   for (int i = 0; i < lenght; i++)
   {
      if (i >= 2)
      {
         *(ptr + i) = *(ptr + i - 1) + *(ptr + i - 2);
      }

      printf(" ptr : %f \n", *(ptr + i));
   }

      printf(" sizeof : %d \n", sizeof(*ptr));

   return 0;
}
