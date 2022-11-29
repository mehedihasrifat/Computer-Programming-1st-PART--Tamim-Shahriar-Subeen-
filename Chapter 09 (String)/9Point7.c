#include <stdio.h>

int main()
{
    char str1[] = "Bangla", str2[] = "desh", str3[12];
    int length1 = 6, length2 = 4;

    for (int i = 0; i < length1; i++)
    {
        str3[i] = str1[i];
    }

    for (int i = 6, j = 0; j < length2; i++, j++)
    {
        str3[i] = str2[j];
    }

    str3[10] = '\0';

    printf("%s\n", str3);

    return 0;
}