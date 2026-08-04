class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> result;
        int start = 0, next = 1;
        while (next < nums.size())
        {
            if (nums[next] != nums[start]+1)
            {
                for (int i = nums[start]+1; i < nums[next]; i++)
                    result.push_back(i);
            }
            start++;
            next++;
        }
        return result;
    }
};