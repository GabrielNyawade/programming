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
		for (int i = 0; i < (num - (num % D)) / D; i++)
			output.append("D");
		
		num = num % D;
		for (int i = 0; i < (num - (num % C)) / C; i++)
			output.append("C");

		num = num % C;
		for (int i = 0; i < (num - (num % L)) / L; i++)
			output.append("L");

		num = num % L;
		for (int i = 0; i < (num - (num % X)) / X; i++)
			output.append("X");

		num = num % X;
		for (int i = 0; i < (num - (num % V)) / V; i++)
			output.append("V");

		num = num & V;
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
	int year = 1824;
	std::cout << intToRoman(year);
	return 0;
}
