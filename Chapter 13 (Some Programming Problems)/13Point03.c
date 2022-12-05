/**
 * @file 13Point03.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This program prints a pattern with the 'C' character
 * @version 0.1
 * @date 2022-12-04
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

    for (int i = (num * 2) - 1, j = num, r = num, s = num - 1, m = 2; i >= 1; i--, j--, r--)
    {
        if (i >= num)
        {
            for (int p = num; p > r; p--)
            {
                printf(" ");
            }

            for (int k = 1; k <= j; k++)
            {
                printf("C");
            }
        }
        else
        {
            for (int q = 1; q < s; q++)
            {
                printf(" ");
            }

            s--;

            for (int l = 1; l <= m; l++)
            {
                printf("C");
            }

            m++;
        }

        printf("\n");
    }

    return 0;
}