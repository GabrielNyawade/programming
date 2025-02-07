#include <iostream>
#include <vector>

std::vector<int> swap_sort(std::vector<int>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = i+1; j < vec.size(); j++)
		{
			if (vec[i] > vec[j])
				std::swap(vec[i], vec[j]);
		}
	}
	return vec;
}


int main()
{
	std::vector<int> numbers = { 15, 9, 6, 4, 12, 27, 30, 13, 1, 42, 57, 19, 3, 67, 4, 1, 0 };
	std::vector<int> numbers_sorted = swap_sort(numbers);
	std::cout << "{";
	for (int i = 0; i < numbers_sorted.size(); i++)
	{
		std::cout << numbers_sorted[i];
		if (i < numbers_sorted.size() - 1) std::cout << ", ";
	}
	std::cout << "}" << "\n";

	return 0;
}
