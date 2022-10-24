class Solution {
public:
    int result;
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (auto it = nums.begin(); it!= nums.end(); it++)
        {
            if (*(it+1)==*(it))
            {
                result = *it;
                break;
            }
        }
        return result;
    }
};