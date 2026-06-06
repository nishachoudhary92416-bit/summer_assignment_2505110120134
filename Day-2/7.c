#include<stdio.h>
int main()
{
    int num,digit,prod=1;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;        //for gettingdigits of number one by one
        prod=prod*digit;     //for getting product of digits 
        num=num/10;          //to update the number
    }
    printf("Product of digits: %d\n", prod);
    return 0;
}