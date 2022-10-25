#include <stdio.h>

int main()
{
    int ara[5][5] = {
        {1, 2, 3, 4, 5},
        {10, 20, 30, 40, 50},
        {100, 200, 300, 400, 500},
        {1000, 2000, 3000, 4000, 5000},
        {10000, 20000, 30000, 40000, 50000}};

    int ara2[5][5];

    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("%d  ", ara[r][c]);
        }

        printf("\n\n");
    }

    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            ara2[c][r] = ara[r][c]; // (1) ara2[0][0] = ara[0][0]   // (2) ara2[1][0] = ara[0][1]   // (3) ara2[2][0] = ara[0][2]   To be continued...
        }
    }

    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("%d  ", ara2[r][c]);
        }

        printf("\n");
    }

    return 0;
}