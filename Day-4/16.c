#include<stdio.h>
#include<math.h>
int main()
{
    int start,end,num,temp,digit,r,sum;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ending number:");
    scanf("%d",&end);
    for(num=start;num<=end;num++)
    {
        temp=num;
        digit=0;
        sum=0;
        while(temp!=0)
        {
            digit++;
            temp=temp/10;
        }
        temp=num;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+pow(r,digit);
            temp=temp/10;
        }
        if(sum==num)
            printf("%d\n",num);
    }

}