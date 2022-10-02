#include <stdio.h>

int main()
{
    int m, n = 5;
    int i;

    for (i = 1; i <= 10; i++)
    {
        m = m + n;
        printf("%d X %d = %d\n", n, i, m);
    }

    return 0;
}
