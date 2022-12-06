/**
 * @file 13Point06.c
 * @author Mehedi Hasan Rifat (Mehedi Hasan Rifat)
 * @brief This program prints the factorial of a number given by the user
 * @version 0.1
 * @date 2022-12-06
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main()
{
    int num, factorial = 1;

    printf("Which number you want to get the factorial of?: ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        factorial *= i;
    }

    printf("Factorial of %d is: %d\n", num, factorial);

    return 0;
}