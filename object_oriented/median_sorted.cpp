#include <iostream>
#include <vector>

std::vector<int> swap_sort(std::vector<int>& nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] > nums[j])
				std::swap(nums[i], nums[j]);
		}
	}
	return nums;
}

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2)
{
	for (int i = 0; i < nums2.size(); i++)
		nums1.push_back(nums2[i]);

	swap_sort(nums1);
	int is_odd = nums1.size() % 2;
	if (is_odd == 1)
		return nums1[(nums1.size() / 2)];
	else
	{
		double mid_values = nums1[(nums1.size() / 2)] + nums1[(nums1.size() / 2) - 1];
		return mid_values / 2;
	}
}

int main()
{
	std::vector<int> array1 = { 9, 12, 3 };
	std::vector<int> array2 = { 6, 15, 18 };
	double median = findMedianSortedArrays(array1, array2);
	std::cout << "The median value is " << median << "\n";
	return 0;
}
