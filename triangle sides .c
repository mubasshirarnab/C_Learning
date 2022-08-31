#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Please enter the the three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a+b>c && a+c>b && b+c>a){
        printf("The Triangle is Valid");
    }
    else{
        printf("The Triangle is not Valid");
    }

    return 0;
}
