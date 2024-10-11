#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_string(char str[]);
void dec_to_bin(int a);
void dec_to_hex(int a);

int main(int argc, char const *argv[])
{
    int dec, bin, hex, oct;
    printf("Enter number to be converted >>> ");
    scanf("%d", &dec);
    dec_to_bin(dec);
    

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
    int conv = 0;
    char str_buf[16];
    while (a > 0)
    {
        conv = conv * 10 + a % 2;
        char post[4];
        snprintf(post, sizeof(post), "%d", conv);
        
        strcat(str_buf, post);
        a = a / 2;
    }
    reverse_string(str_buf);
    printf("0b%s\n", str_buf);
    
}

void dec_to_hex(int a)
{

}