#include <stdio.h>

int main()
{
    int n, i, m = 0;

    for (n = 1; n <= 20; n++)
    {
        for (i = 1; i <= 10; i++)
        {
            m = m + n;
            printf("%d X %d = %d\n", n, i, m);
        }

        m = 0;
        printf("\n");
    }

    return 0;
}