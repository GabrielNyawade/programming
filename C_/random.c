#include <stdio.h>

int add_numbers(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int a, b;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    int sum = add_numbers(a, b);
    printf("The sum of %d and %d is %d \n", a, b, sum);

    return 0;
}
