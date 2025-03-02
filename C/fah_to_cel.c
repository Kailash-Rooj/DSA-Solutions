#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    if (fahrenheit >= -459.67) {
        celsius = (fahrenheit - 32) * 5.0 / 9.0;

        printf("Temperature in Celsius: %.2f\n", celsius);
    } else {
        printf("Invalid input! Temperature cannot be below absolute zero (-459.67°F).\n");
    }

    return 0;
}
