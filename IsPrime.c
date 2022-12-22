#include<stdio.h>

void IsPrime(int num);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    IsPrime(n);

    return 0;
}

void IsPrime(int num)
{
    int flag=0;
    if(num==1 || num==0){
        flag=1;
    }
    for(int i=2; i<=num-1; i++){
        if(num%i==0){
            flag=1;
        }
    }
    if(flag==1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}
