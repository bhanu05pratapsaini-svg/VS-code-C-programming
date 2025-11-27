//
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int freq[10] = {0};   

    while (n > 0) {
        int digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    int maxFreq = 0, result = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    printf("%d\n", result);
    return 0;
}