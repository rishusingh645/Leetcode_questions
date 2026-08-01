class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || t.length() > s.length())
            return "";
        unordered_map <char,int> t_requirement;
        for (char a : t)
            t_requirement[a]++;
        int left = 0, right = 0;
        int t_req_count = t_requirement.size(), window_count = 0;
        unordered_map <char,int> window;
        int min_length = INT_MAX;
        int start = 0, end = 0;
        while (right < s.length())
        {
            char c = s[right];
            if (t_requirement.count(c))
            {
                window[c]++;
                if (window[c] == t_requirement[c])
                    window_count++;
                while (window_count == t_req_count)
                {
                    int length = right - left + 1;
                    if (length < min_length)
                    {
                        min_length = length;
                        start = left;
                        end = right;
                    }
                    if (t_requirement.count(s[left])) 
                    {
                        window[s[left]]--;
                        if (window[s[left]] < t_requirement[s[left]])
                            window_count--;
                    }
                    left++;
                    while (left < s.length() && !t_requirement.count(s[left]))
                        left++;
                }
            }
            right++;
        }
        return min_length == INT_MAX ? "" : s.substr(start, min_length);
    }
};