// Q3 write a program to calculate the are and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    
    scanf("%d %d", &length, &breadth);

    
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    
    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}
