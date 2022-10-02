#include <stdio.h>

int main()
{
    int a, b, t, gcd, lcm, mul;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    mul = (a * b);

    if (a == 0)
        gcd = b;
    else if (b == 0)
        gcd = a;
    else
    {
        while (b != 0)
        {
            t = b;
            b = a % b;
            a = t;
        }

        gcd = a;
    }

    lcm = mul / gcd;

    printf("LCM: %d\n", lcm);

    return 0;
}