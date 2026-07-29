class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digit_sum = 0, element_sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            element_sum += nums[i];
            int temp = nums[i];
            while (temp > 0)
            {
                int a = temp % 10;
                digit_sum += a;
                temp /= 10;
            }
        }
        return element_sum - digit_sum;
    }
};