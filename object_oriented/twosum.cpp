#include <iostream>

void find_constituents_of(int target, int array[], int len)
{
    int num1, num2, valid_arrays = 0;
    for (int i = 0; i < len; i++)
    {
        num1 = array[i];
        for (int j = i+1; j < len; j++)
        {
            num2 = array[j];
            int result = num1 + num2;
            if (result == target)
            {
               std::cout << "{" << array[i] << ", " << array[j] << "}" << "\n";
               valid_arrays++;
            }
        }
    }
    if (valid_arrays == 0)
        std::cout << "Could not find any constituents!\n";
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int number = 7;
    int size_arr1 = sizeof(arr1) / sizeof(arr1[0]);
    find_constituents_of(number, arr1, size_arr1);
    return 0;
}