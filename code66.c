//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, x, i, pos;

    scanf("%d", &n);
    int arr[n+1];   

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);   

    pos = n;  
    for (i = 0; i < n; i++) {
        if (x < arr[i]) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = x;

    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
