#include <iostream>
#include <string>
#define I   1
#define V   5
#define X	10
#define L	50
#define C	100
#define D	500
#define M	1000

std::string intToRoman(int num) {
	std::string output;
	while (num != 0)
	{
		for (int i = 0; i < (num - (num % M)) / M; i++)
			output.append("M");
		
		num = num % M;

		if (num < M && num >= M - C)
		{
			output.append("CM");
			num -= M - C;
		}
		else
		{
			for (int i = 0; i < (num - (num % D)) / D; i++)
				output.append("D");
		
			num = num % D;
		}
		
		if (num < D && num >= D - C)
		{
			output.append("CD");
			num -= D - C;
		}
		else
		{
			for (int i = 0; i < (num - (num % C)) / C; i++)
				output.append("C");

			num = num % C;
		}
		
		if (num < C && num >= C - X)
		{
			output.append("XC");
			num -= C - X;
		}
		else if (num < L && num >= L - X)
		{
			output.append("XL");
			num -= (L - X);
		}
		else
		{
			for (int i = 0; i < (num - (num % L)) / L; i++)
				output.append("L");

			num = num % L;
		}
		
		for (int i = 0; i < (num - (num % X)) / X; i++)
			output.append("X");

		num = num % X;
		
		if (num == X - 1)
		{
			output.append("IX");
			num = 0;
		}
		else if (num == V - I)
		{
			output.append("IV");
			num = 0;
		}
		else
		{
			for (int i = 0; i < (num - (num % V)) / V; i++)
				output.append("V");

			num = num % V;
		}
		
		for (int i = 0; i < num; i++)
		{
			output.append("I");
			num--;
		}
	}
	return output;
}
int main()
{
	int year;
	std::cout << "Enter number >>> ";
	std::cin >> year;
	std::cout << year << " in Roman numerals is " << intToRoman(year) << "\n";
	return 0;
}
