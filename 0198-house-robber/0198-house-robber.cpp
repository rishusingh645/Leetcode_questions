class Solution {
public:
    int rob(vector<int>& nums) {
        int curr = 0;
        int prev = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = max(curr,prev + nums[i]);
            prev = curr;
            curr = temp;
        }
        return curr;
    }
};