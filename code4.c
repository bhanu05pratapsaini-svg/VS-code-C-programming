// Q4 Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#include <math.h>

int main() {
    float radius, area, circumference;

    
    scanf("%f", &radius);

    
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    
    printf("Area=%f, Circumference=%f\n", area, circumference);

    return 0;
}




