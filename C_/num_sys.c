#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void reverse_string(char str[]);
void dec_to_bin(int a);
void dec_to_hex(int a);

int main(int argc, char const *argv[])
{
    int dec, bin, hex, oct;
    printf("Enter aber to be converted >>> ");
    scanf("%d", &dec);
    dec_to_bin(dec);
    dec_to_hex(dec);
    

    return 0;
}

void reverse_string(char str[])
{
    int len = strlen(str);
    int left = 0, right = len - 1;
    while (left < right)
    {
        char init = str[left];
        str[left] = str[right];
        str[right] = init;
        left++;
        right--;
    }
}
void dec_to_bin(int a)
{
<<<<<<< HEAD
    int conv = 0;
    char str_buf[1];
=======
    printf("0b");
    if (a == 0)
    {
        printf("0");
        return;
    }
    int bin[32];
    int i = 0;
>>>>>>> refs/remotes/origin/main
    while (a > 0)
    {
        bin[i] = a % 2;
        a /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) 
        printf("%d", bin[j]);

    printf("\n");
}

void dec_to_hex(int a)
{
    a = pow(a, 3);

}