class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int pivot_count = 0;
        vector<int> low;
        vector<int> high;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == pivot)
                pivot_count++;
            else if(nums[i] < pivot)
                low.push_back(nums[i]);
            else
                high.push_back(nums[i]);
        }
        for (int i = 0; i < low.size(); i++)
            result.push_back(low[i]);
        while (pivot_count > 0)
        {
            result.push_back(pivot);
            pivot_count--;
        }
        for (int i = 0; i < high.size(); i++)
            result.push_back(high[i]);
        return result;
    }
};