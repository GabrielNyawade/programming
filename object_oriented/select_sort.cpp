#include <iostream>
#include <vector>

std::vector<int> sort_vector(std::vector<int>& vec)
{
	int val1 = vec[0];
	std::vector<int> output;
	while (vec.size() > 1)
	{
		int i;
		for (i = 1; i < vec.size(); i++)
		{
			int val2 = vec[i];
			if (val2 < val1)
			{
				val1 = val2;
			}
		}
		output.push_back(val1);
		for (i = 0; i < vec.size(); i++)
		{
			if (vec[i] == val1)
				vec.erase(vec.begin() + i);
		}
		i = 1;
		val1 = vec[0];
	}
	output.push_back(val1);
	return output;
}

int main()
{
	std::vector<int> numbers = { 15, 9, 6, 4, 12, 27, 30, 13, 1, 42, 57, 19, 3, 67, 4, 1, 0 };
	std::vector<int> numbers_sorted = sort_vector(numbers);
	std::cout << "{";
	for (int i = 0; i < numbers_sorted.size(); i++)
	{
		std::cout << numbers_sorted[i];
		if (i < numbers_sorted.size() - 1) std::cout << ", ";
	}
	std::cout << "}" << "\n";
	return 0;
}
