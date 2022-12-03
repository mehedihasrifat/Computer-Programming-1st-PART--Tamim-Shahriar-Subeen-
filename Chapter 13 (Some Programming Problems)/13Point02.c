/**
 * @file 13Point02.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This program prints a pattern with the 'C' character
 * @version 0.1
 * @date 2022-12-03
 *
 * @copyright Copyright (c) 2022
 *
 */

/*
    CCCCCCCCCCC
     CCCCCCCCC
      CCCCCCC
       CCCCC
        CCC
         C
        CCC
       CCCCC
      CCCCCCC
     CCCCCCCCC
    CCCCCCCCCCC
*/

#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = num; i >= 1; i -= 2)
    {
        for (int k = 1; k <= (num - (i + k)); k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("C");
        }

        printf("\n");
    }

    for (int rev = i + 4; rev <= num; rev += 2)
    {
        for (int k = 1; k <= (num - (rev + k)); k++) //"(num - (rev + k));" is a formula created by Mehedi Hasan Rifat to print spaces correctly before printing the characters
        {
            printf(" ");
        }

        for (int j = 1; j <= rev; j++)
        {
            printf("C");
        }

        printf("\n");
    }

    return 0;
}