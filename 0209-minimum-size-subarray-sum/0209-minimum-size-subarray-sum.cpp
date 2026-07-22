class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0;
        int sum = 0;
        int min_length = INT_MAX;
        for (int next = 0; next < nums.size(); next++)
        {
            sum += nums[next];
            while(sum >= target)
            {
                int length = next - start + 1;
                min_length = min(min_length,length);
                sum -= nums[start];
                start++;
            }
        }
        if (min_length == INT_MAX)
            return 0;
        else 
            return min_length;
    }
};