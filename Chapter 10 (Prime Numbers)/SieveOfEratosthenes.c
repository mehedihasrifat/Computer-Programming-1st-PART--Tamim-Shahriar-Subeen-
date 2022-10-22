#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);

    int primes[n + 1];

    for (int i = 2; i <= n; i++)
    {
        primes[i] = 1;
    }

    primes[0] = 0;
    primes[1] = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (primes[i] == 1)
        {
            for (int j = 2; (i * j) <= n; j++)
            {
                primes[i * j] = 0;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (primes[i] != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}