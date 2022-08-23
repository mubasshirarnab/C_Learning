#include<stdio.h>

int main()
{
    double loan_amount,interest_rate,num_of_years,total_amount,monthly_amount;

    printf("Enter the amount of loan: ");
    scanf("%lf", &loan_amount);

    printf("Enter the interest rate: ");
    scanf("%lf", &interest_rate);

    printf("Enter the number of year: ");
    scanf("%lf", &num_of_years);

    total_amount=(loan_amount + loan_amount * interest_rate / 100.00);
    monthly_amount=(total_amount / num_of_years * 12);

    printf("The Total amount: %.2lf\n", total_amount);
    printf("The Monthly amount: %.2lf\n", monthly_amount);

    return 0;
}


