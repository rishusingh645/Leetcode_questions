class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int beg = 0, end = nums.size()-1;
       while (beg < end)
       {
            if (nums[beg] % 2 == 0)
                beg++;
            else if (nums[end] % 2 != 0)
                end--;
            else
                swap(nums[beg++],nums[end--]);
       }
       return nums;
    }
};