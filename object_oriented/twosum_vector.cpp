#include <iostream>
#include <vector>

std::vector<int> find_constituents_of(int target, const std::vector<int>& array)
{
    int num1, num2, result;
    std::vector<int> output;
    for (int i = 0; i < array.size(); i++)
    {
        num1 = array[i];
        for (int j = i + 1; j < array.size(); j++)
        {
            num2 = array[j];
            result = num1 + num2;
            if (result == target)
            {
                output.push_back(num1);
                output.push_back(num2);
                return output;
            }
        }
    }
    return output;
}

void twosum_vector(int target, const std::vector<int>& array)
{
    std::cout << "{";
    std::vector<int> output = find_constituents_of(target, array);
    for (int i = 0; i < output.size(); i++)
    {
        std::cout << output[i];
        if (i < output.size() - 1)
            std::cout << ", ";
    }
    std::cout << "}" << "\n";
}

int main()
{
    int number;
    std::vector<int> my_array;
    for (int i = 0; i < 5; i++)
    {
        my_array.push_back(i);
    }
    std::cout << "Enter target >>> ";
    std::cin >> number;

    twosum_vector(number, my_array);

    return 0;
}
