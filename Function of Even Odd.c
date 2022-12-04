#include<stdio.h>

void value(char);

int main()
{
    int n;
    scanf("%c", &n);

    value(n);

    return 0;
}
void value(char num)
{
    printf("Value received from main: %c", num);
}
