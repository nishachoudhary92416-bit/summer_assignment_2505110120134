#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("Enter the term:");
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(n==1)
    printf("%d\n",a);
    else
    printf("%d\n",b);
    return 0;
}