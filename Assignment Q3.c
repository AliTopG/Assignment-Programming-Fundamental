#include <stdio.h>

int main() {
    float basic_pay, house_rent, medical_allowance, computer_allowance, total_pay;
    
    // Input basic pay from user
    printf("Please enter Basic pay? ");
    scanf("%f", &basic_pay);
    
    // Calculate allowances and total pay
    house_rent = 0.4 * basic_pay;
    medical_allowance = 0.18 * basic_pay;
    computer_allowance = 0.15 * basic_pay;
    total_pay = basic_pay + house_rent + medical_allowance + computer_allowance;
    
    // Print pay-slip
    printf("\n PAY SLIP\n");
    printf("Basic pay :%.0f\n", basic_pay);
    printf("House Rent (40%%) :%.0f\n", house_rent);
    printf("Medical Allounce (18%%) :%.0f\n", medical_allowance);
    printf("Computer Allounce(15%%) :%.0f\n", computer_allowance);
    printf("-----------------------------------------------------------------------------\n");
    printf("Total pay: :%.0f", total_pay);
    
    return 0;
}