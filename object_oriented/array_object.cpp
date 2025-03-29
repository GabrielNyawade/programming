#include <iostream>
using namespace std;

// Create a program that splits an array into two equal parts

int get_split_point(int array[], int len)
{
    int left_sum = 0;
    
    for (int i = 0; i < len; i++)
    {
        left_sum += array[i];
        int right_sum = 0;
        for (int j = i+1; j < len; j++)
        {
            right_sum += array[j];
        }
        if (left_sum == right_sum)
        {
            return i+1;
        }
    }
    return -1;
}

void get_halves(int array[], int len)
{
    int split_point = get_split_point(array, len);
    if (split_point == -1 || split_point == len)
    {
        cout << "Array split not possible!\n";
        return;
    }
    else
    {
        cout << "Array 1: {";
        for (int i = 0; i < len; i++)
        {
            if (i == split_point)
            {
                cout << "\n";
                cout << "Array 2: {";
            }
            cout << array[i];
            if (i == split_point-1 || i == len-1)
            {
                cout << "}";
            }
            else {
                cout << ", ";
            }
        }
    }
    return;
}

int main()
{
    int my_array[] = {1, 2, 4, 3, 2, 1, 1};
    int size = sizeof(my_array) / sizeof(my_array[0]);
    cout << "Array size = " << size << "\n";
    get_halves(my_array, size);
    return 0;
}
