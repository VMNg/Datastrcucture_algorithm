#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int result;
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (auto it = nums.begin(); it != nums.end(); it++) {
            if (*(it + 1) == *(it)) {
                result = *it;
                break;
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 5, 2, 3, 1, 7};
    cout << s.findDuplicate(nums);
    return 0;
}