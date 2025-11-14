// Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1; 
    int hasOdd = 0;        

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0) {
        digit = temp % 10;

        if (digit % 2 != 0) {      
            product *= digit;
            hasOdd = 1;
        }

        temp /= 10;
    }

    if (!hasOdd) {
        product = 1;   
    }

    printf("Product of odd digits: %lld\n", product);

    return 0;
}
