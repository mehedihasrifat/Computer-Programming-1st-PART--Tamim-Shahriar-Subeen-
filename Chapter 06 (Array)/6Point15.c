#include <stdio.h>

int main()
{
    int total_marks[10];
    int marks_count[101];

    printf("Enter the marks of Math: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &total_marks[i]);
    }

    for (int i = 0; i < 101; i++)
    {
        marks_count[i] = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        marks_count[total_marks[i]]++;
    }

    for (int i = 1; i <= 100; i++)
    {
        printf("Number: %d\tCount: %d\n", i, marks_count[i]);
    }

    return 0;
}