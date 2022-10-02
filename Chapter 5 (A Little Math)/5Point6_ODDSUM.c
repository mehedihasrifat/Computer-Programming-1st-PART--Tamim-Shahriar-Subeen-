#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        sum = sum + i;
    }

    printf("The sum is %d\n", sum);

    return 0;
}