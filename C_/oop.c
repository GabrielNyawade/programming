#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_even(int num);

int main(int argc, char const *argv[])
{
	char s_array[1024];
	int num_f;
	int index = sizeof(int);
	int len = sizeof(s_array) / index;

	int even_sum = 0;
	int odd_sum = 0;
	int count_e = 0;
	int count_o = 0;
	printf("When finished, press ENTER key.\n");
	for (int i = 0; i < len; i = i + index)
	{
		char n = s_array[i];
		printf("Enter number %d >>> ", i+1);
		fgets(n, sizeof(n), stdin);
		if (strcmp (n, "\n") == 0)
		{
			break;
		}
	}
	printf("\n");
	for (int i = 0; i < len; i = i + index)
	{
		char conv_buff[16];
		strcpy(conv_buff, s_array);
		int num_f = atoi(conv_buff[0]);
		if (get_even(num_f) == 0)
		{
			printf("%d is an even number\n", num_f);
			even_sum = even_sum + num_f;
			count_e++;
		} else if (get_even(num_f) == 1) {
			printf("%d is an odd number\n", num_f);
			odd_sum = odd_sum + num_f;
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