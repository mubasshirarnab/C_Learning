#include <stdio.h>

int main()
{
   int num;

   printf("Enter the number you want to test: ");
   scanf("%d", &num);

   if((num != 0) && ((num &&(num - 1)) == 0)){
      printf("\n%d is a power of 2", num);
   }
   else{
      printf("\n%d is not a power of 2\n", num);
   }

 return 0;
}
