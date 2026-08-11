class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        vector <int> temp = nums;
        sort(temp.begin(),temp.end());
        int i = (n-1)/2 , j = n-1;
        for (int k = 0; k < n; k++)
        {
            if (k % 2 == 0)
                nums[k] = temp[i--];
            else
                nums[k] = temp[j--];
        }
    }
};