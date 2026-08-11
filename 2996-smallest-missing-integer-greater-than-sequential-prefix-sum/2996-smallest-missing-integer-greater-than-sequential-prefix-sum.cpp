class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i-1]+1)
                sum += nums[i];
            else
                break;
        }
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == sum)
                sum++;
        }
        return sum;
    }
};