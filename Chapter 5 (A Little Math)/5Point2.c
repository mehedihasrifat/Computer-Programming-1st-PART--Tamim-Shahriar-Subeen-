#include <stdio.h>

int main()
{
    double x, y;
    double a1, a2, b1, b2, c1, c2;

    printf("Enter the values for a1, a2, b1, b2, c1, c2: ");
    scanf("%lf %lf %lf %lf %lf %lf", &a1, &a2, &b1, &b2, &c1, &c2);

    x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);

    printf("\nx: %.2lf, y: %.2lf\n", x, y);

    return 0;
}
