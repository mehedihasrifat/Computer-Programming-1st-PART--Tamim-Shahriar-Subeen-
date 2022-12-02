/**
 * @file Binary_Method02.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This program converts Decimal number to Binary number using remainder (Method No. 02)
 * @version 0.1
 * @date 2022-12-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <string.h>

void decimal_binary(int quotient)
{
    char binary[100];

    for (int i = 0; quotient != 0; i++)
    {
        if (quotient % 2 == 0)
        {
            binary[i] = '0';
        }
        else
        {
            binary[i] = '1';
        }

        quotient /= 2;
    }

    int len = strlen(binary);

    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", binary[i]);
    }

    printf("\n");
}

int main()
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimal_binary(decimal);

    return 0;
}