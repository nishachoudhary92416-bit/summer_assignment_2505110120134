#include <stdio.h>

int main()
{
    int i, j, rows, alpha;

    printf("Enter the no. of rows : ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)      // loop for rows
    {
        alpha = 64;

        for(j = 1; j <= i; j++)     // loop for columns
        {
            alpha++;
            printf("%c", alpha);
        }

        printf("\n");               // next row
    }

    return 0;
}