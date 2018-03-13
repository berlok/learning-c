/*
This programme caclulates the area of a rectangle

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double width = 32.3;
    double height = 15.3;

    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("Perimeter is: %.2f\n", perimeter);
    printf("Area is: %.2f\n", area);

    return 0;
}
