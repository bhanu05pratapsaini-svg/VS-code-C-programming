// Q61: Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, key;
    
    scanf("%d", &n);            
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
    }
    
    scanf("%d", &key);          
    
    int index = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;          
            break;              
        }
    }
    
    if(index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");
    
    return 0;
}
