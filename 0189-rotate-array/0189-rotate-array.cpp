class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int start = 0, end = nums.size()-1;
        while (start < end)
            swap(nums[start++],nums[end--]);
        if (k > nums.size())
            k %= nums.size();
        start = 0, end = k-1;
        while (start < end)
            swap(nums[start++],nums[end--]);
        start = k, end = nums.size()-1;
        while (start < end)
            swap(nums[start++],nums[end--]);
    }
};