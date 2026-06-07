#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,r,digit=0,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        digit++;
        temp=temp/10;
    }
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+pow(r,digit);
        temp=temp/10;
    }
    if(sum==n)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong number\n");
    return 0;
}