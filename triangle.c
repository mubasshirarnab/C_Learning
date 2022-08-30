#include<stdio.h>

int main()
{
    int a,b,c,sum;
     printf("Please Three angles of a Triangle: ");
     scanf("%d %d %d", &a, &b, &c);

     sum=a+b+c;

     if(sum==180 && a>0 && b>0 && c>0){
        printf("The Triangle is valid");
     }
     else{
        printf("The Triangle is not valid");
     }

     return 0;
}
