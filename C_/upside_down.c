#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    int k = rows;
    for (int i = 0; i < rows; i++)
    {
        for (int spaces = 0; spaces < i; spaces++)
        {
            printf(" ");
        }
        for (int stars = 0; stars < 2 * k - 1; stars++)
        {
            printf("*");
        }
        printf("\n");
        k--;
    }

    return 0;
}