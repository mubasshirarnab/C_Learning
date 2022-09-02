#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the First Side of a Triangle: ");
    scanf("%d", &a);
    printf("Enter the Second Side of a Triangle: ");
    scanf("%d", &b);
    printf("Enter the Third Side of a Triangle: ");
    scanf("%d", &c);

    if(a==b && a==c && b==c){
        printf("The Triangle is Equilateral");
    }
        else if(a==b || a==c || b==c){
        printf("The Tringle is Isosceles");
    }
    else if(a!=b && a!=c && b!=c){
        printf("The Triangle is Scalene");
    }
    else{
        printf("Invalid Triangle");
    }

    return 0;
}
