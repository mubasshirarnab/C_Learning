#include<stdio.h>

void swap(int, int);

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);

    printf("Value in function: %d %d\n", x,y);

    swap(x,y);

}
void swap(int num1, int num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("The value in main: %d %d", num1, num2);
}
