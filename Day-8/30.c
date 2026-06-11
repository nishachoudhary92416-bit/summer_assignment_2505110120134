#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter the no. of rows : ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)      // loop for rows
    {
        for(j = 1; j <= i; j++)     // loop for columns
        {
            printf("%d", j);
        }

        printf("\n");               // next row
    }

    return 0;
}