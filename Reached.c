#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    while(1){
        if(x!=y){
           printf("%d,", x*x);
           if(x<y){
               x++;
           }
           else if(x>y){
               x--;
           }
        }
        if(x==y){
            printf("Reached");
               break;
        }
    }

   return 0;
}
