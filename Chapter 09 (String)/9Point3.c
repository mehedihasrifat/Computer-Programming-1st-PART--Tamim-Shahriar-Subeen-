#include <stdio.h>

void lowercase(char country[], int length);

int main()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    int length = 10;

    printf("%s\n", country);

    lowercase(country, length);

    printf("%s\n", country);

    return 0;
}

void lowercase(char country[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (country[i] >= 'a' && country[i] <= 'z')
        {
            country[i] = 'A' + (country[i] - 'a');
        }
    }

    return;
}