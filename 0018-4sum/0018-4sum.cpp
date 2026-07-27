class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size();i++)
        {
            if (i > 0 && nums[i] == nums[i-1])
                continue;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (j > i+1 && nums[j] == nums[j-1])
                    continue;
                int beg = j + 1, end = nums.size()-1;
                while (beg < end)
                {
                    long long sum = (long long)nums[i] + nums[j] + nums[beg] + nums[end];
                    if (sum < target)
                        beg++;
                    else if (sum > target)
                        end--;
                    else
                    {
                        result.push_back({nums[i],nums[j],nums[beg],nums[end]});
                        beg++;
                        end--;
                        while (beg < end && nums[beg] == nums[beg-1])
                            beg++;
                        while (beg < end && nums[end] == nums[end+1])
                            end--;
                    }
                }
            }
        }
        return result;
    }
};