#include<stdio.h>
int main()
{
    int i,j,range,c;
    printf("Enter a range:");
    scanf("%d",&range);
    printf("Prime Number in range of %d are\n",range);
    for(i=2;i<=range;i++)
    {
        c=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
            printf("%d\n",i);
    }
    return 0;
}