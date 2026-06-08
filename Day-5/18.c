#include<stdio.h>
int main()
{
    int i,num,cpy,digit,sum=0,fact;
    printf("Enter the number:");
    scanf("%d",&num);
    cpy=num;
    while(num!=0)
    {
        digit=num%10;          //finding the digits of number
        fact=1;
        for(i=1;i<=digit;i++)  //loop for finding factorial of digits
        {
            fact*=i;
        }
        sum+=fact;             //sum of factorial of digits
        num/=10;               //updation of while loop
    }
    if(cpy==sum)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not a strong number\n");
    }
    return 0;
}