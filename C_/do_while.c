/*
Using two nested do...while loops
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int rows;
    printf("How many rows? \n");
    scanf("%d", &rows);
    
    char str[128] = "*";
    char str_add[128] = "**";

    int i = 0;
    do
    {
        int j = rows - i;
        do
        {
            printf(" ");
            j--;
        } while (j > 0);
        printf("%s\n", str);
        strcat(str, str_add);
        i++;
    } while (i < rows);
    
    return 0;
}