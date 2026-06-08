#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)       //for finding divisors
        {
            sum+=i;         //sum all the divisors of a number
        }
    }
    if(num==sum&&num>0)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not a perfect number\n");
    }
    return 0;
}