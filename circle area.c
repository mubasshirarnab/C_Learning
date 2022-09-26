#include<stdio.h>

int main()
{
    int r;
    double pi=3.1416;
    double area;

    printf("Enter the Radius of a Circle: ");
    scanf("%d", &r);

    area=pi*r*r;

    printf("The area of the Circle is %.2lf\n",area);

    return 0;

}

