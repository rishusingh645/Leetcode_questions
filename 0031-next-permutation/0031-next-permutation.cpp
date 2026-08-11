class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 1;
        while (i > 0 && nums[i] <= nums[i-1])
            i--;
        if (i > 0)
        {
            int pivot = nums[i-1];
            int j = nums.size()-1;
            while (j > i && nums[j] <= pivot)
                j--;
            swap(nums[i-1],nums[j]);
        }
        sort(nums.begin()+i,nums.end());
    }
};