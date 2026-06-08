#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
    { 
        printf("The factors of %d are:\n",num);
        for(i=1;i<=num;i++)                      //for printing factors of a number
        {
            if(num%i==0)
                printf("%d\n",i);
        }
    }
    else                                        //for invalid input
          printf("Invalid input\n");
    return 0;
}