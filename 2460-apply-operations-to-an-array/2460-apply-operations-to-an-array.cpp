class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        int start = 0, next = 1;
        while (next < nums.size())
        {
            if (nums[start] == 0 && nums[next] != 0)
                swap(nums[start++],nums[next++]);
            else if (nums[start] == 0 && nums[next] == 0)
                next++;
            else
            {
                start++;
                next++;
            }
        }
        return nums;
    }
};