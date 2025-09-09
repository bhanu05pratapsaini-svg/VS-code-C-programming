#include <stdio.h>

int main() {
    int i, j;
    for(i =0; i <= 5; i++)       
 {  
    for(char ch = 'A';ch<='A'+(5-i-1);ch++)
      printf("%c",ch);    
      printf("\n");
 }
    return 0;
}