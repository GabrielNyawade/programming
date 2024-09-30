#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string[1000];

void check_odd_string();

int main()
{
    printf("Enter a string: \n");
    fgets(string, sizeof(string), stdin);
    check_odd_string();
    return 0;
}

/*
- We want to generate a program that finds palindromes
- Palindromes are phrases that spell the same both forwards and backwards
- ASCII values maybe...
*/


void check_odd_string()
{
    printf("Your string is %s\n", string);
    
    int length = strlen(string)-1;  
    char buffer[length];
    
    for (int i = 0; i < length; i++)
    {
        buffer[0] = string[i];
        char *lptr = &string[i-1];
        char *rptr = &string[i+1];
        

        if (lptr >= string && *rptr != '\0' && *lptr == *rptr)
        {
            printf("Before shifting: %s\n", buffer);

            for (int shift = length; shift >= 0; shift--)
            {
                buffer[shift+1] = buffer[shift];
            }
            printf("After shifting: %s\n", buffer);
            buffer[0] = *lptr;
            buffer[strlen(buffer)-1] = *rptr;
            printf("After adding: %s\n", buffer);

            lptr--;
            rptr++;

        }

            break;
            
        
    }
    

    printf("The longest palindrome is: %s\n", buffer);
   


}
