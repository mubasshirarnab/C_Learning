#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the first input: ");
    scanf("%d", &a);
    printf("Enter the second input: ");
    scanf("%d", &b);
    printf("Enter the third input: ");
    scanf("%d", &c);
    int sum=0;

    if(a>0){
        sum=sum+a;
    }else{
       sum=sum-a;
    }
    if(b>0){
        sum=sum+b;
    }else{
        sum=sum-b;
    }
    if(c>0){
        sum=sum+c;
    }else{
        sum=sum-c;
    }

    sum=a+b+c;

    printf("Sum is %d", sum);

    return 0;
}
