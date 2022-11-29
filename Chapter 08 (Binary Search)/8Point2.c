#include <stdio.h>

int b_search(int ara[], int low, int high, int num);

int main()
{
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int high = 15;
    int low = 0;
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = b_search(ara, low, high, num);

    if (result == 0)
    {
        printf("%d is not found in the array\n", num);
    }
    else
    {
        printf("%d is found in the array. It is the %dth element in the array\n", ara[result], result);
    }
}

int b_search(int ara[], int low, int high, int num)
{
    int middle;
    int index;
    while (low <= high)
    {
        middle = (low + high) / 2;

        if (ara[middle] == num)
        {
            break;
        }
        else if (ara[middle] > num)
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }

    if (low > high)
    {
        index = 0;
    }
    else
    {
        index = middle;
    }

    return index;
}
