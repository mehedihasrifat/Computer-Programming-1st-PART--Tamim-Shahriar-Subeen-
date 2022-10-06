#include <stdio.h>

double pi = 3.14;

void my_func()
{
    pi = 3.1416;

    return;
}

void print()
{
    printf("%lf\n", pi);

    return;
}

int main()
{
    printf("%lf\n", pi);
    my_func();
    printf("%lf\n", pi);
    print();

    return 0;
}