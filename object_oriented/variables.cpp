#include <iostream>
using namespace std;
double power(double base, int exponent)
{
    double result = base;
    if (exponent < 0)
    {
        exponent *= -1;
        for (int i = 0; i < exponent - 1; i++)
        {
            result *= base;
            return 1 / result;
        }
    }
    else if (exponent == 1) return result;
    else if (exponent > 1)
    {
        for (int i = 0; i < exponent - 1; i++)
        {
            result *= base;
            return result;
        }
    }
    return 1;
}
int main()
{
    int num = 64;
    int pwr = 3;
    cout << power(num, pwr) << endl;

    const char *str = "This is a string\n";
    int str_ltrs = 0;
    if (str)
    {
        while (*str++)
        {
            str_ltrs++;
        }
    }
    str = str - str_ltrs - 1;
    cout << str_ltrs << ": " << str << "\n";

    string str_obj("This is still a string\n");
    int str_obj_ltrs = str_obj.size();
    cout << str_obj_ltrs << ": " << str_obj << "\n";
    return 0;
}
