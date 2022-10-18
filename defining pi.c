#include<stdio.h>
#define PI 3.1416

int main()
{
    float r,A;
    printf("Enter the redius of a Circle: ");
    scanf("%f",&r);

    A=PI*r*r;

    printf("AREA:%.2f",A);

    return 0;
}
