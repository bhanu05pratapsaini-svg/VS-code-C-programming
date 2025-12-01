//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (n != m) {
        printf("False");
        return 0;
    }

    int diag[n];

    for (int i = 0; i < n; i++) {
        diag[i] = a[i][i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
