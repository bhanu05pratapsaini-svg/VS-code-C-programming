// Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, first, last, temp, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first = temp;

    int middle = (num % divisor) / 10; 

    int swapped = (last * divisor) + (middle * 10) + first;

    printf("Swapped number: %d\n", swapped);

    return 0;
}
