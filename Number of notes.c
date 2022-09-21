#include<stdio.h>

int main()
{
    int total_amount,notes_of_1,notes_of_5,notes_of_10,notes_of_50,notes_of_100,notes_of_500;
    printf("Enter the Total amount of Money: ");
    scanf("%d", &total_amount);

    notes_of_500=total_amount/500;
    notes_of_100=(total_amount%500)/100;
    notes_of_50=((total_amount%500)%100)/50;
    notes_of_10=(((total_amount%500)%100)%50)/10;
    notes_of_5=((((total_amount%500)%100)%50)%10)/5;
    notes_of_1=((((total_amount%500)%100)%50)%10)%5;

    printf("%d Taka=%d notes of 500\n", total_amount, notes_of_500);
    printf("\t  %d notes of 100\n", notes_of_100);
    printf("\t  %d notes of 50\n", notes_of_50);
    printf("\t  %d notes of 10\n", notes_of_10);
    printf("\t  %d notes of 5\n", notes_of_5);
    printf("\t  %d notes of 1\n", notes_of_1);

    return 0;
}
