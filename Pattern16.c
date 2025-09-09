#include <stdio.h>

int main() {
    int i, j;
    for(i =0; i < 5; i++)       
 {  char ch='A'+i;
    for(j=0;j<=i;j++){
      printf("%c",ch);}    
      printf("\n");
 }
    return 0;
}