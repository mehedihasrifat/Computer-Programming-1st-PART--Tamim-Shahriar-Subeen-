#include <stdio.h>

double circle_area(double r)
{
    double pi = 3.14;
    double area = pi * r * r;

    return area;
}

int main()
{
    double r = 4.2;
    double area = circle_area(r);

    printf("Area of the circle is: %lf\n", area);

    return 0;
}