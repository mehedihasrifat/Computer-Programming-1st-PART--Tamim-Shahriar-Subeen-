#include <stdio.h>

double find_average(int ara[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + ara[i];
    }

    double average = sum / 11.0;

    return average; // We could also write (return sum / 11.0)
}

int main()
{
    int ara[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int n = 11;

    double average = find_average(ara, n);

    printf("Average: %lf\n", average);

    return 0;
}