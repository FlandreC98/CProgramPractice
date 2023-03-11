
/// @brief 构建斐波那契数列,并返回头指针.
/// @param fisrtNum 首位数字.
/// @param secondNum 次位数字.
/// @param lenght 需要构建的长度.
/// @return
int* Creat_FibonacciSequence(int  fisrtNum,int secondNum,int lenght)
{
   int *ptr = malloc(sizeof(int) * lenght); //申请一个int类型的的数组.

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

/// @brief 传递数组,并修改为fb数列.
/// @param ptr 
/// @param lenght 
/// @return 
int* Creat_FibonacciSequence_Ptr(int* ptr, int lenght)
{

   if (*ptr == 0 &&  *(ptr+1) == 0)
      *(ptr + 1) = 1; // 如果前两位都为0,则没有意义.

      for (int i = 0; i < lenght; i++)
      {
         if (i >= 2)             //跳过前两位.
            *(ptr + i) = *(ptr + i - 1) + *(ptr + i - 2);

         printf(" ptr : %d \n", *(ptr + i));
        }

   return ptr;
   }
