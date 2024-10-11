#include <stdio.h>


int main()
{
    int a, b;
    printf("Enter two integers: \n");
    scanf("%d%d", &a, &b);
    int sum = a + b;
    printf("The sum is %d \n", sum);
    
    printf("The memory address of a is %p\n", &a);
    printf("The memory address of b is %p\n", &b);

    return 0;
}


