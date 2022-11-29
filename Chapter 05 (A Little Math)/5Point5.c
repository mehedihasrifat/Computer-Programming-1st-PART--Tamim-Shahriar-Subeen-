#include <stdio.h>

int main()
{
    int n, sum;

    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;

    printf("The sum is %d\n", sum);

    return 0;
}