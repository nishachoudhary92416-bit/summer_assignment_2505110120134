#include<stdio.h>
int main()
{
    int i,num,c=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            c++;
    }
    if(c==2)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    return 0;
}