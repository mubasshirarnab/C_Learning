#include<stdio.h>
int  main()
{
int n, i;
float f, max = 0.00;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=1; i <= n; i++){
      scanf("%f", &f);
      if(f>max){
      max=f;
      }
   }

    printf("\n The Maximum number is %f", max);

    return 0;
}
