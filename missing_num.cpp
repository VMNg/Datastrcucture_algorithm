#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(count!=nums[i])
            {
                return count;
            }
            count++;
        }
        return count;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,4,0,6,5};
    cout << s.missingNumber(nums);
}