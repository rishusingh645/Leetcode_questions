class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        int old=INT_MAX;
        for (int i = 0; i < nums.size()-2; i++)
        {
            if (i > 0 && nums[i] == nums[i-1])
                continue;
            int beg = i + 1;
            int end = nums.size()-1;
            while (beg < end)
            {
                int current_sum = nums[beg] + nums[end] + nums[i];
                int temp_diff = 0;
                temp_diff = abs(target - current_sum);
                if (old>temp_diff)
                {
                    sum=current_sum;
                    old=temp_diff;
                }
                if (current_sum == target)
                    return current_sum;
                else if (current_sum < target)
                    beg++;
                else
                    end--;
            }
        }
        return sum;
    }
};