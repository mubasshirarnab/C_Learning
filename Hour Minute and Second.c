#include<stdio.h>

int main()
{
    int total_seconds, hour, minute, second;
    printf("Enter the Total Seconds: ");
    scanf("%d", &total_seconds);

    hour=total_seconds/3600;
    minute=(total_seconds%3600)/60;
    second=(total_seconds%3600)%60;

    printf("%d Seconds = %d Hour, %d Minute and %d Second\n", total_seconds, hour, minute, second);

    return 0;
}
