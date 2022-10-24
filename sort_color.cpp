#include<vector>
#include <iostream>
using namespace std;

void sortColors(vector<int>& nums) {
    int l=0, mid=0, h=nums.size() - 1;
    while (mid <= h)
        if (nums[mid] == 0)
            swap(nums[mid++], nums[l++]);
        else if (nums[mid] == 1)
            mid++;
        else 
            swap(nums[mid], nums[h--]);
}

int main ()
{
    vector<int> nums = {1,2,1,0,2,0,0,1};
    sortColors(nums);
}