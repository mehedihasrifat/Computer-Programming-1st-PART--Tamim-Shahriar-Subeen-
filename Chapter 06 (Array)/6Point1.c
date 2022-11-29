#include <stdio.h>

int main()
{
    int ft_marks, st_marks, final_marks;
    double total_marks;

    ft_marks = 96;
    st_marks = 97;
    final_marks = 98;

    total_marks = ft_marks / 4.0 + st_marks / 4.0 + final_marks / 2.0;

    printf("%0.0lf\n", total_marks);

    return 0;
}