#include <stdio.h>

int main() {
    int i, j;int breakpoint;
    for(i = 0; i <= 4; i++)
     { breakpoint =(2*i+1)/2;
        for(j = 0; j <= 5 - i-1; j++) {
            printf(" ");
        }
        char ch ='A';
        for(j=0;j<2*i+1;j++) {
            printf("%c",ch);
            if(j<breakpoint)ch++;
            else ch--;
        }
        printf("\n");
    }
    return 0;
}