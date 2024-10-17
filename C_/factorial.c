#include <stdio.h>
#include <stdlib.h>
unsigned long long int factorial(int n);
int main()
{
    int number;
    printf("Enter your number -> ");
    scanf("%d", &number);
    printf("%d! = %lld\n", number, factorial(number));
    return 0;
}

unsigned long long factorial(int n)
{
    unsigned long long p = n;
    if (n == 0 | n == 1)
    return 1;
    for (int i = 1; i < n; i++)
    {
        p = p * (n - i);
    }
    return p;
}