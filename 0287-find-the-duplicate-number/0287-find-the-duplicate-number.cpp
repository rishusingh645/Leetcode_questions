class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int,int> map;
        for (int a : nums)
        {
            map[a]++;
            if (map[a] > 1)
                return a;
        }
        return -1;
    }
};