#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string[1000];

void check_odd_string();
void check_even_string();

int main()
{
    printf("Enter a string: \n");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    printf("Your string is %s\n", string);
    check_odd_string();
    check_even_string();
    return 0;
}

/*
- We want to generate a program that finds palindromes
- Palindromes are phrases that spell the same both forwards and backwards
- ASCII values maybe...
*/


void check_odd_string()
{   
    int length = strlen(string);  
    char buffer[length];
    
    for (int i = 0; i < length; i++)
    {
        int left = i, right = i;
        int buf_index = 0;
        buffer[buf_index++] = string[i];

        while (left >= 0 && right < length - 1 && string[left - 1] == string[right + 1])
        {
            left--;
            right++;

            memmove(&buffer[1], buffer, buf_index);
            buffer[0] = string[left];
            buffer[buf_index++] = string[right];
            
        }
        buffer[buf_index] = '\0';

        printf("Odd-length palindrome found: %s\n", buffer);
    }
    
}

void check_even_string()
{
    int length = strlen(string);
    char buffer[length];

    for (int i = 0; i < length; i++)
    {
        if (string[i] != string[i + 1])
        {
            continue;
        }
        int left = i, right = i + 1;
        int buf_index = 0;

        buffer[buf_index++] = string[left];
        buffer[buf_index++] = string[right];

        while (left >= 0 && right < length && string[left] == string[right])
        {
            left--;
            right++;

            memmove(&buffer[1], buffer, buf_index);
            buffer[0] = string[left];
            buffer[buf_index++] = string[right];
            
        }
        buffer[buf_index] = '\0';

        printf("Even-length palindrome found: %s\n", buffer);
    }
}