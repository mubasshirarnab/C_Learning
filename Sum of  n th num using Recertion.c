#include<stdio.h>

int Add(int);

int main()
{
    int n;
    printf("Enter the number of term: ");
    scanf("%d", &n);

    printf("Sum: %d\n", Add(n));

    return 0;
}

int Add(int N)
{
    if(1==N){
        return N;
    }
    else{
        return N + Add(N-1);
    }
}
