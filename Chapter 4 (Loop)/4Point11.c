#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &m);

        for (int j = 10; j <= m; j++)
        {
            if (j % 11 == 0)
            {
                continue;
            }

            printf("%d\n", j);
        }
    }

    return 0;
}