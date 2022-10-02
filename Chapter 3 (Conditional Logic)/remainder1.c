#include <stdio.h>

int main()
{
    int number = 5, div = 2, ans = number / div;
    int remainder = number - (div * ans);

    printf("Remainder: %d\n", remainder);

    return 0;
}