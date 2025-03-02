#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest, amount;
    int i;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // simple interest
    simple_interest = (principal * rate * time) / 100;

    // compound interest
    amount = principal;
    for (i = 0; i < time; i++) {
        amount = amount * (1 + rate / 100);  
    }
    compound_interest = amount - principal;

    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
