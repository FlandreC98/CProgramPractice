int* CreatFibonacciSequence(int  fisrtNum,int secondNum,int lenght)
{
   int *ptr = malloc(sizeof(int) * lenght);

   ptr[0] = fisrtNum;
   ptr[1] = secondNum;
   for (int i = 0; i < lenght; i++)
   {
      if (i >= 2)
      {
         *(ptr + i) = *(ptr + i - 1) + *(ptr + i - 2);
      }

      printf(" ptr : %d \n", *(ptr + i));
   }

   return ptr;
}
