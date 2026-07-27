class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0, max2 = 0;
        for (int a : nums)
        {
            if (a > max1)
            {
                max2 = max1;
                max1 = a;
            }
            else if (a > max2)
                max2 = a;
        }
        return (max2-1) * (max1 - 1);
    }
};