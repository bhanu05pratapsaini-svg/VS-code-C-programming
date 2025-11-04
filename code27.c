// Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += 2 * i + 1;  // Generates the ith odd number
    }

    printf("%d\n", sum);
    return 0;
}