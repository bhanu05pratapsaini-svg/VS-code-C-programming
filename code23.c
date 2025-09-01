//Q23: Write a program to calculate a library fine based on late days.
#include <stdio.h>

int main() {
    int days;
    printf("Enter the no.of days: ");
    scanf("%d", &days);

    if (days <= 30) {
        int fine = 0;

        if (days <= 5)
            fine = days * 2;
        else if (days <= 10)
            fine = days * 4;
        else
            fine = days * 6;

        printf("Fine=  %d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}