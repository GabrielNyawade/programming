#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265358979323846
#define euler 2.71828182845904523536
#define N_APPROX 3e1
#define EPSILON 10e-3

double absolute(float num)
{
    if (num < 0)
        return num * -1;
    else
        return num;
}
double factorial(int num)
{
    double result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

double pwr(float base, int exponent)
{
    double result = base;
    if (exponent == 0)
        return 1;
    else if (exponent < 0)
    {
        exponent *= -1;
        for (int i = 1; i < exponent; i++)
        {
            result *= base;
        }
        return 1 / result;
    }
    else
    {
        for (int i = 1; i < exponent; i++)
        {
            result *= base;
        }
        return result;
    }
}

double sq_root(float num)
{
    double current = num/2;
    for (int i = 0; i < N_APPROX; i++)
    {
        double next = 0.5 * (current + num/current);
        current = next;
    }
    return current;
}
double n_root(int n, float num)
{
    double current = num/2;
    for (int i = 0; i < N_APPROX; i++)
    {
        double next = pwr(n, -1) * ((n-1)*current + num / pwr(current, n-1));
        current = next;
    }
    return current;
}

double sine(float num)
{
    while (num >= 360 || num <= -360)
    {
        if (num >= 360)
            num -= 360;
        else if (num <= -360)
            num += 360;
    }
    num *= pi/180; 
    double result = 0;
    for (int i = 1; i < N_APPROX; i+=2)
    {
        result += pwr(num, i) / factorial(i);
        num *= -1;
    }
    return result;
}

double cosine(float num)
{
    while (num >= 360 || num <= -360)
    {
        if (num >= 360)
            num -= 360;
        else if (num <= -360)
            num += 360;
    }
    return sine(90 - num);
}

double tangent(float num)
{
    while (num <= -360 || num >= 360)
    {
        if (num >= 360)
            num -= 360;
        else if (num <= -360)
            num += 360;
    }
    return sine(num) / cosine(num);
}

double log_natural(float num)
{
    if (num <= 0)
        return 0;
    double current = 1.0;
    for (int i = 0; i < N_APPROX; i++)
    {
        double next = current - ((pwr(euler, current) - num) / pwr(euler, current));
        current = next;
        double threshold = next - current;
        if (absolute(threshold) < EPSILON)
            return next;
    }
    return current;
}
int main()
{
    while (1)
    {
        printf("Calculate:\n");
        printf("\t1. Factorial\n\t2. Square (x^2)\n\t3. Cube (x^3)\n\t4. Power (x^n)\n\t5. Square root\n\t6. Cube root\n\t7. n-root\n\t8. Sine\n\t9. Cosine\n\t10. Tangent\n\t11. Natural logarithm (ln(x))\n\n\t13. Exit\n");
        int option;
        scanf("%d", &option);
        switch (option)
        {
            float x;
            int n;
            case 1:
                printf("Enter number: ");
                scanf("%f", &x);
                printf("%.f! = %.f\n", x, factorial(x));
                break;
            case 2:
                printf("Enter number: ");
                scanf("%f", &x);
                printf("Square of %f is %f\n", x, pwr(x, 2));
                break;
            case 3:
                printf("Enter number: ");
                scanf("%f", &x);
                printf("Cube of %f is %f\n", x, pwr(x, 3));
                break;
            case 4:
                printf("Enter number: ");
                scanf("%f", &x);
                printf("Enter exponent: ");
                scanf("%d", &n);
                printf("%f to the power of %d is %f\n", x, n, pwr(x, n));
                break;
            case 5:
                printf("Enter number: ");
                scanf("%f", &x);
                printf("Square root of %f is %f\n", x, sq_root(x));
                break;
            case 6:
                printf("Enter number: ");
                scanf("%f", &x);
                printf("Cube root of %f is %f\n", x, n_root(3, x));
                break;
            case 7:
                printf("Enter number: ");
                scanf("%f", &x);
                printf("Enter root: ");
                scanf("%d", &n);
                printf("%d-root of %f is %f\n", n, x, n_root(n, x));
                break;
            case 8:
                printf("Enter angle: ");
                scanf("%f", &x);
                printf("sin(%f) = %f\n", x, sine(x));
                break;
            case 9:
                printf("Enter angle: ");
                scanf("%f", &x);
                printf("cos(%f) = %f", x, cosine(x));
                break;
            case 10:
                printf("Enter angle: ");
                scanf("%f", &x);
                printf("tan(%f) = %f\n", x, tangent(x));
                break;
            case 11:
                printf("Enter number: ");
                scanf("%f", &x);
                printf("ln(%f) = %f", x, log_natural(x));
                break;
            case 13:
                printf("Exiting program...\n");
                return 0;
                break;
            default:
                printf("Invalid input!\n");
                break;
        }
        printf("\n====================================\n");
    }
}
