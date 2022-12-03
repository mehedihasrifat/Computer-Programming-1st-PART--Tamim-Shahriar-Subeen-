/**
 * @file 13Point01.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This program prints a pattern with the 'C' character
 * @version 0.1
 * @date 2022-12-03
 *
 * @copyright Copyright (c) 2022
 *
 */

/*
    CCCCCCC
    CCCCCC
    CCCCC
    CCCC
    CCC
    CC
    C
    CC
    CCC
    CCCC
    CCCCC
    CCCCCC
    CCCCCCC
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("C");
        }

        printf("\n");

        if (i == 1)
        {
            for (int k = 2; k <= num; k++)
            {
                for (int l = 1; l <= k; l++)
                {
                    printf("C");
                }

                printf("\n");
            }
        }
    }

    return 0;
}