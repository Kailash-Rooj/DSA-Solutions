#include <stdio.h>

int main()
{
    char operator;
    double num1, num2;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);  

    if (operator == '+') {
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);  
    }
    else if (operator == '-') {
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    }
    else if (operator == '*') {
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    }
    else if (operator == '/') {
        if (num2 != 0) {
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Error! Invalid operator.\n");
    }

    return 0;
}
