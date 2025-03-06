#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    discriminant = (b * b) - (4 * a * c);

    if (discriminant < 0) {
        printf("No real roots exist.\n");
        return 0;
    }

    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    if (root1 == root2)
        printf("Root: %.2lf\n", root1);
    else
        printf("Roots: %.2lf and %.2lf\n", root1, root2);

    return 0;
}
