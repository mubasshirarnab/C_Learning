#include<stdio.h>

int main()
{
    int i,n,position,num;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int a[1000];

    for(i=0; i<n; i++)
    {

        scanf("%d", &a[i]);
    }

    printf("\nEnter the Number to insert: ");
    scanf("%d", &num);
    printf("\nEnter the position to insert: ");
    scanf("%d", &position);

    for(i=n; i>=position; i--)
    {
        a[i+1]=a[i];

    }
    a[position]=num;
    n++;
    for(i=0; i<n; i++)
    {
        printf("%d,", a[i]);

    }

    return 0;
}
