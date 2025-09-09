#include <stdio.h>

int main() {
    int i, j;
    int space = 0;
         for (i = 0; i < 10; i++) {
        for (j = 0; j < 10 - i; j++) {
            printf("*");
        }
       for (j = 0; j < space; j++) {
            printf(" ");
        }
        for (j = 0; j < 10 - i; j++) {
            printf("*");
        }
        space += 2;
        printf("\n");
    }

    space = 18; 
    for (i = 1; i <= 10; i++) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        for (j = 0; j < space; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("*");
        }
        space -= 2;
        printf("\n");
    }

    return 0;
}