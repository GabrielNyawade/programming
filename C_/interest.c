#include <stdio.h>

int main()
{
    float p;
    float rate;
    float target;

    printf("Enter deposit...\n");
    scanf("%f", &p);
    printf("Enter interest rate (p.a.)...\n");
    scanf("%f", &rate);
    printf("Enter your target amount...\n");
    scanf("%f", &target);
    int years = 0;
    while (p < target)
    {
        p = p + (p*rate/100);
        years++;
    }
    printf("It will take %d years for your money to reach your target.\n", years);
    
    return 0;
}