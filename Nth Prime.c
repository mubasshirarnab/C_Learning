#include<stdio.h>

void GenNthPrime(int);
int IsPrime(int);

int main()
{
    int n;
    printf("Enter the Value of n: ");
    scanf("%d", &n);

    GenNthPrime(n);

    return 0;
}
void GenNthPrime(int N)
{
    int i,count=0;
    for(i=2; ; i++){
        if(IsPrime(i)==1){
            count++;
        }
        if(count==N){
            break;
        }
    }
    printf("%dth Prime: %d", N,i);
}

int IsPrime(int num)
{
    int flag=1;
    for(int i=2; i<num; i++){
        if(num%i==0){
            flag=0;
        }
    }
    return flag;
}
