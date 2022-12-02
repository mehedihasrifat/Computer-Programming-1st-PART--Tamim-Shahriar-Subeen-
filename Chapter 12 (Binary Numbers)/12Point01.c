/**
 * @file 12Point01.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief First program of Binary chapter from the book called "Computer Programming 1st Part by Tameem Shahriar Subeen"
 * @version 0.1
 * @date 2022-12-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char binary[65];
    int len, decimal, power, i;

    printf("Enter the binary number: ");
    scanf("%s", binary);

    decimal = 0;
    len = strlen(binary);
    power = len - 1;

    for (i = 0; i < len; i++)
    {
        decimal += (binary[i] - '0') * pow(2, power);
        power--;
    }

    printf("Decimal value is %d\n", decimal);

    return 0;
}