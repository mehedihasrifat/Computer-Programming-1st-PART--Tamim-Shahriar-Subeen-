#include <stdio.h>

int main()
{
    double F, C;

    printf("C: ");
    scanf("%lf", &C);

    F = (C * 1.8) + 32;

    printf("F: %0.1lfF\n", F);

    return 0;
}