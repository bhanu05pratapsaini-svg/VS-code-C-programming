// Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int hcf;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("%d\n", hcf);
    return 0;
}