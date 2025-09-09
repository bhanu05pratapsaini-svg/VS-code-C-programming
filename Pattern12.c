#include <stdio.h>

int main() {
    int space =6;
    int i,j;
    for(i = 1; i <= 4; i++)       
{        for(j = 1; j <=i; j++) 
             {printf("%d",j);}     
         for(j= 1; j <=space ; j++) 
             {printf(" ");}
         for(j = i; j>=1; j--)
             {printf("%d",j);}
         space -=2;
         printf("\n");
}
    return 0;
}