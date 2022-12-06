#include<stdio.h>

int main()
{
    int x=10;
    int *p;

    p=&x;

    printf("The value of x: %d\n", x);

    *p = 20;

    printf("Value of x: %d\n",x);
    printf("Address of x: %p\n", p);
    printf("Value of p: %p", p);

    return 0;
}
