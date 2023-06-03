#include<stdio.h>

int main() {
    int num, sum=0, rem;
    printf("\tEnter any numbers: ");
    scanf("%d",&num);
    while(num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("\tSum of digits: %d", sum);
    return 0;
}
 