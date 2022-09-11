#include<stdio.h>

int main()
{
    int i,sum=0;

    for(i=30;i<=120;i++){
        if(i%3==0 && i%5==0){
        sum=sum+i;
      }
    }
    printf("The Sum of the numbers is: %d", sum);

    return 0;
}
