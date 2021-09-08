#include <iostream>
#include <vector>
using namespace std;
//search target 
int binarySearch(vector<int>&nums, int target)
{
	if (nums.size() == 0) return -1;
	int left = 0, right = nums.size() - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (nums[mid] == target)
			return mid;
		else if (mid < target)
			left = mid + 1;
		else if (mid > target)
			right = mid - 1;
	}
	return -1;
}

//search left bound
int binarySearchLeftBound(vector<int>&nums, int target)
{
	if (nums.size() == 0) return -1;
	int left = 0, right = nums.size() - 1;

	while(left <= right)
	{
		int mid = left + (right - left) / 2;
		if (nums[mid] <target)
			left = mid + 1;
		else if (nums[mid] >target)
			right = mid - 1;
		else if (nums[mid] == target)
			right = mid - 1;

	} 
	if (left >= nums.size() || nums[left] != target) return -1;
	return left;
}

//search right bound
int binarySearchRightBound(vector<int>&nums, int target)
{
	if (nums.size() == 0) return -1;
	int left = 0, right = nums.size() - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
			if (nums[mid] < target)
				left = mid + 1;
			else if (nums[mid] > target)
				right = mid - 1;
			else if (nums[mid] == target)
				left = mid + 1;		
	}
	if (right < 0) return - 1;
	return nums[right] == target ? right : -1; 
}