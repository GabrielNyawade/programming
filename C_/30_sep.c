#include <stdio.h>
#define add(a, b) a + b
int main()
{
    int number1, number2, sum;
    printf("Enter two integer numbers:\n");
    scanf("%d%d", &number1, &number2);
    sum = add(number1, number2);
    printf("The sum is %d\n", sum);

    return 0;
}