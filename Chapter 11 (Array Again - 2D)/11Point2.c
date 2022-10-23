#include <stdio.h>

int main()
{
    int namta[10][10];
    int even = 0, odd = 0, sum = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            namta[i][j] = (i + 1) * (j + 1);

            if (namta[i][j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }

            sum = sum + namta[i][j];
        }
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n", (i + 1), (j + 1), namta[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    printf("ODD: %d\tEVEN: %d\tSUMMATION: %d\n", odd, even, sum);

    return 0;
}