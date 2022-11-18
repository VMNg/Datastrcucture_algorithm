#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> a;
        for (int i : nums)
            a[i]++;
        int maxval = nums[0];
        for (auto x : a) {
            if (x.second > a[maxval])
                maxval = x.first;
        }
        return maxval;
    }
};

int main() {
    Solution t;
    vector<int> nums = {1, 2, 2, 5, 3};
    cout << t.majorityElement(nums);
}
