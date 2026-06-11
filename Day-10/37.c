#include <stdio.h>

int main()
{
    int i, j, k, rows;

    printf("Enter the no. of rows : ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)          // loop for printing rows
    {
        for(k = 1; k <= rows - i; k++)  // loop for printing spaces
        {
            printf(" ");
        }

        for(j = 1; j <= (2 * i - 1); j++)   // loop for printing stars
        {
            printf("*");
        }

        printf("\n");                   // move to next line
    }

    return 0;
}