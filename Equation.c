#include<stdio.h>

int main()
{
    int a,b,c;
    float X,Y,Z;

    printf("Enter the value of a,b,c : ");
    scanf("%d %d %d", &a,&b,&c);

    X=a-b/3+c*2-1;
    Y=a-(b/(3+c)*2)-1;
    Z=a-((b/3)+c*2)-1;

    printf("The value of X is %.2lf\n", X);
    printf("The value of Y is %.2lf\n", Y);
    printf("The value of Z is %.2lf\n", Z);

    return 0;
}
