/**
 * @file Binary_Method01.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This program converts Decimal number to Binary number by decreasing the power of 2 (Method No. 01)
 * @version 0.1
 * @date 2022-12-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int decimal;
    char binary[100];
    int sum = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int power = 0;

    while (pow(2, power) <= decimal)
    {
        power++;
    }

    power -= 1;

    int i = 0;

    do
    {
        sum += pow(2, power);

        if (sum > decimal)
        {
            binary[(power + i++) - power] = '0';
            sum -= pow(2, power);
        }
        else
        {
            binary[(power + i++) - power] = '1';
        }

        power--;
    } while (power != -1);

    printf("Binary: %s\n", binary);

    return 0;
}