#include <stdio.h>

int main()
{
    double total_amount, number_of_years, monthly_amount, interest_rate;

    printf("Enter the loan_amount: ");
    scanf("%lf", &total_amount);

    printf("Enter the interest rate: ");
    scanf("%lf", &interest_rate);

    printf("Enter the number of years: ");
    scanf("%lf", &number_of_years);

    for (int i = 1; i <= number_of_years; i++)
    {
        total_amount = total_amount + (total_amount * (interest_rate / 100.00));
    }

    monthly_amount = total_amount / (number_of_years * 12);

    printf("Total amount: %0.2lf tk\n", total_amount);
    printf("Monthly amount: %0.2lf tk\n", monthly_amount);

    return 0;
}