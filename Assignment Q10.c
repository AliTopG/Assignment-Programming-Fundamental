#include <stdio.h>

int main() {
    int N1, N2, temp;

    printf("Enter value of N1: ");
    scanf("%d", &N1);

    printf("Enter value of N2: ");
    scanf("%d", &N2);

    printf("\nBefore swapping:\n");
    printf("Value of N1 is: %d\n", N1);
    printf("Value of N2 is: %d\n", N2);

    // Swap the values
    temp = N1;
    N1 = N2;
    N2 = temp;

    printf("\nAfter swapping:\n");
    printf("Value of N1 is: %d\n", N1);
    printf("Value of N2 is: %d\n", N2);

    return 0;
}