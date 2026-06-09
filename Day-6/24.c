#include<stdio.h>
int main()
{
    int num,pow,i;
    long result=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter the power:");
    scanf("%d",&pow);
    for(i=1;i<=pow;i++)           //loop for continue multiplication upto then power
    {
        result*=num;              //multiply the number upto given number
    }
    printf("%d^%d is %ld\n",num,pow,result);
    return 0;
}