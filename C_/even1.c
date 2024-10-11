#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_even();

int main()
{
    char s_int[4];
    printf("Enter number >>> ");
    fgets(s_int, sizeof(s_int), stdin);

    

    return 0;
}

int get_even(int num)
{
    int val = num % 2;
    return val;
}