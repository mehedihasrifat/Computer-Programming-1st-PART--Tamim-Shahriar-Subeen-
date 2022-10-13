#include <stdio.h>
#include <string.h>

int main()
{
    char s[1002];
    char word[100];
    int is_word_started = 0;

    gets(s);

    int length = strlen(s);

    for (int i = 0, j = 0; i < length + 1; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;

                word[j] = 'A' + (s[i] - 'a');

                j++;
            }
            else
            {
                word[j] = s[i];

                j++;
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;
            }
            else
            {
                s[i] = s[i] + 32;
            }

            word[j] = s[i];

            j++;
        }

        else
        {
            if (is_word_started == 1)
            {
                is_word_started = 0;
                word[j] = '\0';

                printf("%s\n", word);

                j = 0;
            }
        }
    }

    return 0;
}