#include<stdio.h>
int main()
{
    int num,digit,new=0,cpy;
    printf("Enter the number:");
    scanf("%d",&num);
    cpy=num;
    while(num!=0)
    {
        digit=num%10;        //for getting digits of number one by one
        new=new*10+digit;   //for reversing the number
        num=num/10;          //to update the number
    }
    if(new==cpy)
    printf("The number %d is a palindrome.\n", cpy);
    else
    printf("The number %d is not a palindrome.\n", cpy);
    return 0;
}