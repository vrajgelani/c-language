#include <stdio.h>

int main() 
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);

}
/*
input-temperature=100
output-Fahrenheit=212
*/