#include <stdio.h>
int main() {
    float l1, b1, l2, b2, l3, b3;
    float p1, p2, p3;
    int max;
    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%f %f", &l1, &b1);
    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%f %f", &l2, &b2);
    printf("Enter length and breadth of Rectangle 3: ");
    scanf("%f %f", &l3, &b3);
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);
    max = (p1 > p2 && p1 > p3) ? 1 :
          (p2 > p3) ? 2 : 3; 
    printf("\nPerimeter of Rectangle 1 = %.2f\n", p1);
    printf("Perimeter of Rectangle 2 = %.2f\n", p2);
    printf("Perimeter of Rectangle 3 = %.2f\n", p3);
    printf("\nRectangle %d has the highest perimeter.\n", max);
    return 0;
}
