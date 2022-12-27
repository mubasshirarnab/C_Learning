#include<stdio.h>

void GeneratePrime(int);
int IsPrime(int);

int main()
{
    int x;
    printf("Enter the number of term: ");
    scanf("%d", &x);

    printf("\nPrime less than %d is: ", x);
    GeneratePrime(x);

    return 0;
}

void GeneratePrime(int n)
{
    for(int i=2; i<n; i++){
        if(IsPrime(i)==1){
            printf("%d,", i);
        }
    }
}

int IsPrimee(int num)
{
    int flag=1;
    for(int i=2; i<num; i++){
        if(num%i==0){
            flag=0;
        }
    }
    return flag;
}
