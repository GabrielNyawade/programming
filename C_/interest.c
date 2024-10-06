#include <stdio.h>

int main()
{
    float p;
    float rate;
    float target;

    printf("Enter deposit >>> ");
    scanf("%f", &p);
    printf("Enter interest rate (p.a.) >>> ");
    scanf("%f", &rate);
    printf("Enter your target amount >>> ");
    scanf("%f", &target);
    int years = 0;
    while (p < target)
    {
        p = p + (p*rate/100);
        years++;
    }
    printf("It will take %d years for your money to reach your target.\n", years);
    printf("By the end of this period, the amount in your account will be %.2f\n", p);
    
    return 0;
}