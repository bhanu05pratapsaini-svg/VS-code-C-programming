#include <stdio.h>

int main(){
    int i,j;
    
    for ( i = 0; i < 7; i++) {
    for ( j = 0; j < 5; j++) {
    int top = i;
    int left = j;
    int bottom = 6 - i;
    int right = 4 - j;
    int min = top;
    if (left < min) min = left;
    if (bottom < min) min = bottom;
    if (right < min) min = right;
    printf("%d ", 4 - min);
        }
        printf("\n");
    }

    return 0;
}