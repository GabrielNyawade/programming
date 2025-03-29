#include <stdio.h>

int main()
{
    int i, num;
    printf("Enter number:\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
        printf("%d", i);
////////////////////////
    printf("\n");
    for (i = num; i >= 1; i--)
        printf("%d", i);
////////////////////////
    printf("\n");
    return 0;
}