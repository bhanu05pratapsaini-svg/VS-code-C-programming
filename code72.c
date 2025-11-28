//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
