class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int beg = i + 1;
            int end = nums.size()-1;
            int target = -nums[i];
            while (beg < end)
            {
                int sum = nums[beg] + nums[end];
                if (sum < target)
                    beg++;
                else if (sum > target)
                    end--;
                else
                {
                    vector <int> temp = {nums[i],nums[beg],nums[end]};
                    result.push_back(temp);
                    beg++;
                    end--;
                    while (beg < end && nums[beg] == nums[beg-1])
                        beg++;
                    while (end > beg && nums[end] == nums[end+1])
                        end--;
                }
            }
        }
        return result;
    }
};