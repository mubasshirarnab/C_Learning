#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,X,s,A;
    scanf("%d%d%d",&a,&b,&c);

    s=(a+b+c)/2;
    X=s*((s-a)*(s-b)*(s-c));
    A=sqrt(X);
    printf("AREA is %d",A);

    return 0;
}
