#include <stdio.h>
#include <string.h>

int main()
{
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int name_length;
    for (int row = 0; row < 7; row++)
    {
        name_length = strlen(saarc[row]);

        for (int col = 0; col < name_length; col++)
        {
            printf("(%d, %d) = %c, ", row, col, saarc[row][col]);
        }

        printf("\n");
    }

    return 0;
}