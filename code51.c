// Q51: Write a program to print the pattern:
#include <stdio.h>

int main() {
    int i, j, spaces;

    for(i = 5; i >= 1; i--) {
        spaces = i - 1;

        for(j = 0; j < spaces; j++) {
            printf(" ");
        }

        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
