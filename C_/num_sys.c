#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// void reverse_string(char str[]);
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

// void reverse_string(char str[])
// {
//     int len = strlen(str);
//     int left = 0, right = len - 1;
//     while (left < right)
//     {
//         char init = str[left];
//         str[left] = str[right];
//         str[right] = init;
//         left++;
//         right--;
//     }
// }
void dec_to_bin(int a)
{
    printf("0b");
    if (a == 0)
    {
        printf("0");
        return;
    }
    int bin[32];
    int i = 0;
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
    printf("0x");
    if (a == 0)
    {
        printf("0");
        return;
    }
    int hex[32];
    int i = 0;
    while (a > 0)
    {
        hex[i] = a % 16;
        if (hex[i] > 9)
        {
            switch (hex[i])
            {
                case 10:
                    printf("A");
                    break;
                case 11:
                    printf("B");
                    break;
                case 12:
                    printf("C");
                    break;
                case 13:
                    printf("D");
                    break;
                case 14:
                    printf("E");
                    break;
                case 15:
                    printf("F");
                    break;
                    
            }   
        }
    }
}