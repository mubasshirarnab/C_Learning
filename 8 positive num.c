#include<stdio.h>

int main()
{
    int i,n,count=1;

    for(i=1; i>0; i++){
        printf("Enter the positive numbers: ");
        scanf("%d", &n);

        if(n>0){
            printf("The %dth Possitive Number is: %d\n", count,n);
            count++;
        }
        if(count==9){
            break;
        }
    }

    return 0;
}
