#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_even();

int main()
{
    int num_array[128];
    int set;
    int odd_sum = 0;
    int count_o = 0;
    int even_sum = 0;
    int count_e = 0;
    printf("Set of ? integers >>> ");
    scanf("%d", &set);
    for (int i = 0; i < set; i++)
    {
        printf("[+]Enter number %d : ", i+1);
        scanf("%d", &num_array[i]);

    }
    printf("\n");
    for (int i = 0; i < set; i++)
    {
        if (get_even(num_array[i]) == 0)
        {
            printf("%d is an even number.\n", num_array[i]);
            even_sum = even_sum + num_array[i];
            count_e++;
        } else if (get_even(num_array[i]) == 1) {
            printf("%d is an odd number.\n", num_array[i]);
            odd_sum = odd_sum + num_array[i];
            count_o++;
        }
    }
    printf("\n");

    printf("There is a total of %d odd numbers and their sum is %d\n", count_o, odd_sum);
    printf("There is a total of %d even numbers and their sum is %d\n", count_e, even_sum);

    return 0;
}

int get_even(int num)
{
    int val = num % 2;
    return val;
}