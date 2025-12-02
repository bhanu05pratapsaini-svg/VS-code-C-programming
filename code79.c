// Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int d = 0; d < r + c - 1; d++) {
        if (d % 2 == 0) {
    
            for(int i = d; i >= 0; i--) {
                int j = d - i;
                if (i < r && j < c)
                    printf("%d ", a[i][j]);
            }
        } else {
        
            for(int j = d; j >= 0; j--) {
                int i = d - j;
                if (i < r && j < c)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
