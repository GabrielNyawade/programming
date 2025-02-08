
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
		// to erase the lowest value fron the initial vector
		bool deleted = false;
		for (i = 0; i < vec.size(); i++)
		{
			if (vec[i] == val1 && !deleted)
			{
				vec.erase(vec.begin() + i);
				deleted = true;
			}
		}
		val1 = vec[0]; // to reset the first comparison value to the beginning of the vector
	}
	output.push_back(val1);
	return output;
}

void show_vector(const std::vector<int>& vec)
{
	std::cout << "{";
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i < vec.size() - 1) std::cout << ", ";
	}
	std::cout << "}" << "\n";
}

int main()
{
	std::vector<int> numbers = { 15, 9, 6, 4, 12, 27, 30, 13, 1, 42, 57, 19, 3, 67, 4, 1, 0 };
	std::vector<int> numbers_sorted = sort_vector(numbers);
	show_vector(numbers_sorted);
	return 0;
}
