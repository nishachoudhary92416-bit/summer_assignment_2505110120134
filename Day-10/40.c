#include<stdio.h>
int main()
{
    int i,j,k,rows,alpha;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        alpha=64;
        for(k=1;k<=rows-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            alpha++;
            printf("%c",alpha);
        }
        for(j=i-1;j>=1;j--)
        {
            alpha--;
            printf("%c",alpha);
        }
        printf("\n");
    }
    return 0;
}