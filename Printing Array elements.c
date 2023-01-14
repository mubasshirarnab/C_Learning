#include<stdio.h>

void print_array(int a[],int i, int n);

int main()
{
    int n,i;
    scanf("%d", &n);
    int array[n];
    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }

    print_array(array,0,n);

    return 0;
}

void print_array(int a[], int i, int n)
{
    if(i>=n)
        return;

    printf("%d ", a[i]);

    print_array(a,i+1,n);
}
