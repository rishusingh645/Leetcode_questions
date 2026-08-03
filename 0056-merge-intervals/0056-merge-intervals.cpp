class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        int start = 0, next = 1;
        int beg = intervals[start][0], end = intervals[start][1];
        while (next < intervals.size())
        {
            if (end >= intervals[next][0])
            {
                end = max(end,intervals[next][1]);
                next++;
            }
            else
            {
                result.push_back({beg,end});
                start = next;
                beg = intervals[start][0];
                end = intervals[start][1];
                next++;
            }
        }
        result.push_back({beg,end});
        return result;
    }
};