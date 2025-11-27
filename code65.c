//Q65: Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int left = 0, right = n - 1, index = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            index = mid;   
            break;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}
