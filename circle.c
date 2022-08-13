#include<stdio.h>

int main()
{
    int r;
    double pi=3.1416;
    double area;

    printf("Enter the Radius: ");
    scanf("%d", &r);

    area=2*pi*r;

    printf("The area is %.2lf\n",area);

    return 0;

}

