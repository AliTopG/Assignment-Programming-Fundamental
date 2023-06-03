#include<stdio.h>

void main()

{

    int n,r,rev=0;

    printf("\nEnter the Number : ");

    scanf("%d",&n);

    while(n!=0)

    {

        r=n%10;

        rev=rev*10+r;

        n=n/10;

    }

    printf("\nReverse Number = %d",rev);  

}