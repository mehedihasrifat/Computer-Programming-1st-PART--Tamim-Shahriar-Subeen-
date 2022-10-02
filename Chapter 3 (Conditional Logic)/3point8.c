#include <stdio.h>

int main()
{
    int number = 5;
    int remainder = number % 2;

    if (remainder == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}