class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start = 0, next = 1;
        while (next < nums.size())
        {
            if(nums[start] == nums[next])
                return true;
            else
            {
                start++;
                next++;
            }
        }
        return false;
    }
};