#include<stdio.h>

int main()
{
    int no_of_days, years,weeks,days;

    printf("Enter total number of Days: ");
    scanf("%d", &no_of_days);

    years=no_of_days/365;
    weeks=(no_of_days%365)/7;
    days=(no_of_days%365)%7;

    printf("%d Days = %d Years, %d Weeks and %d Days\n", no_of_days,years,weeks,days);

    return 0;
}
