#include <stdio.h>

int main() {
    int amount, denominations[8] = {500, 100, 50, 20, 10, 5, 2, 1}, coins[8] = {0};
    
    printf("Enter any amount? ");
    scanf("%d", &amount);
    
    for(int i = 0; i < 8; i++) {
        coins[i] = amount / denominations[i];
        amount = amount % denominations[i];
    }
    
    for(int i = 0; i < 8; i++) {
        printf("%d ", denominations[i]);
    }
    printf("\n");
    
    for(int i = 0; i < 8; i++) {
        printf("%d ", coins[i]);
    }
    
    return 0;
}