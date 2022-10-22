#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);

    char ara[n + 1];

    for (int i = 2; i <= n; i++)
    {
        ara[i] = '1';
    }

    ara[0] = '0';
    ara[1] = '0';

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (ara[i] == '1')
        {
            for (int j = i + i; j <= n; j = j + i)
            {
                ara[j] = '0';
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (ara[i] != '0')
        {
            printf("%d\n", i);
        }
    }

    return 0;
}