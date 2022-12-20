#include<stdio.h>

int Largest_Int(int);

int main()
{
    int n;
    printf("Enter the number to check: ");
    scanf("%d", &n);

    int Maximum = Largest_Int(n);
    printf("The largest Integer in the number is: %d\n", Maximum);

    return 0;
}

int Largest_Int(int N)
{
    int rem,max=0;
    for(int i=1; N!=0; i++){
        rem=N%10;
        N=N/10;
        if(rem>max){
            max=rem;
        }
    }
    return rem;
}
