#include <stdio.h>

int main()
{
    int marks[4][10];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        marks[3][i] = marks[0][i] / 4.0 + marks[1][i] / 4.0 + marks[2][i] / 2.0;
        printf("Roll NO: %d     Total Marks: %d\n", i + 1, marks[3][i]);
    }

    return 0;
}