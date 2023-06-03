#include<stdio.h>

void main (void)
{

int we,he;

printf("Enter 1st Number:\n");
scanf("%d", &we);

printf("Enter 2nd Number:\n");

scanf("%d", &he);

printf("Sum of these two is: %d \n",we+he);
printf("Product of these two is: %d \n", we*he);
printf("Difference between these two is: %d \n", we-he);
printf("Division of these two is: %d \n", we/he);
printf("Reminder of these two is: %d \n",we*0);
printf("--------------------------------- \n");
printf("Total is: \t\t %d",we*he+we+he+we-he+we/he);

}
