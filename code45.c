// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    float num = 2.0, den = 3.0, sum = 0.0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += num / den;
        num += 2;  
        den += 4;   
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}
