/**
 * @file 13Point04.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This program prints a pattern with the 'C' character
 * @version 0.1
 * @date 2022-12-05
 *
 * @copyright Copyright (c) 2022
 *
 */

/*
    C                  C
    CC                CC
    CCC              CCC
    CCCC            CCCC
    CCCCC          CCCCC
    CCCCCC        CCCCCC
    CCCCCCC      CCCCCCC
    CCCCCCCC    CCCCCCCC
    CCCCCCCCC  CCCCCCCCC
    CCCCCCCCCCCCCCCCCCCC
*/

#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int spaces = (num * 2) - 2;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("C");

            if (j == i)
            {
                for (int s = 1; s <= spaces; s++)
                {
                    printf(" ");
                }

                spaces -= 2;

                for (int k = 1; k <= i; k++)
                {
                    printf("C");
                }
            }
        }
        printf("\n");
    }

    return 0;
}