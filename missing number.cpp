#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
class Solution {
public:
    int binarySearch (vector<int>& nums)
    {
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == mid)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        return left;
    }
    int missingNumber(vector<int>& nums) {
        return binarySearch(nums);
    }
};