//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter the numbers:");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", root);
    } else {
        printf("Roots are complex\n");
    }

    return 0;
}