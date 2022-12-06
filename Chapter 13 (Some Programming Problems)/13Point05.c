/**
 * @file 13Point05.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This program checks whether an word is Palindrome or Not
 * @version 0.1
 * @date 2022-12-06
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[25], count = 0;
    ;

    printf("Enter a word: ");
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0, j = len - 1; i <= (len / 2); i++, j--)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        if (str[j] >= 'A' && str[j] <= 'Z')
        {
            str[j] += 32;
        }
        if (str[i] == str[j])
        {
            count++;
        }
    }

    if (((len / 2) + 1) == count)
    {
        printf("%s is a Palindrome\n", str);
    }
    else
    {
        printf("%s is not a Palindrome\n", str);
    }

    return 0;
}