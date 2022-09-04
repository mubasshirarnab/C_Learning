#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of Days: ");
    scanf("%d", &n);

    if(n==28 || n==29){
        printf("February");
    }
    else if(n==30){
        printf("Apr,Jun,Sep,Nov");
    }
    else if(n==31){
        printf("Jan,Mar,May,Jul,Aug,Oct,Dec");
    }
    else{
        printf("Not a valid Month");
    }

    return 0;
}
