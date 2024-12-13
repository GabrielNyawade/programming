#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int row = 1; row <= 10; row++)
    {
        for (int col = 1; col <= 10; col++)
        {
            int table = row * col;
            printf("%d\t", table);
        }
        printf("\n");
    }
    
    return 0;
}
