#include <stdio.h>
#define PI 3.1416

int main() 
{
    float radius, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;

    printf("Perimeter (Circumference) of the circle = %.2f\n", perimeter);

    return 0;
}