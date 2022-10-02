#include <stdio.h>

int main()
{
    double F, C;

    printf("F: ");
    scanf("%lf", &F);

    C = (F - 32) / 1.8;

    printf("C: %0.1lf C\n", C);

    return 0;
}