#include <stdio.h>

int main()
{
    int x, y;

    x = 1;
    y = x;
    x = 2;

    printf("%d\n", y);

    return 0;
}