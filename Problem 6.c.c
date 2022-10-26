#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if(num>0){
        if((num != 0) && ((num &(num - 1)) == 0)){
            printf("\n%d is power of 2", num);
        }
        else{
            printf("\n%d is not power of 2", num);
        }
    }
    else{
        if(num==0){
            printf("\nZero is not a valid input");
        }
        else{
            printf("\nNegative input is not valid");
        }
    }

    return 0;
}
