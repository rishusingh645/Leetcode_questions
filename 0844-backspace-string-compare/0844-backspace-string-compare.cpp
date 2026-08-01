class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string x = "";
        string y = "";
        int i = 0, j = 0;
        while (i < s.size() || j < t.size())
        {
            if(i < s.size() && s[i] != '#')
            {
                x += s[i];
                i++;
            }
            else if(i < s.size() && s[i] == '#' )
            {
                if (!x.empty())
                    x.pop_back();
                i++;
            }
            if(j < t.size() && t[j] != '#')
            {
                y += t[j];
                j++;
            }
            else if(j < t.size() && t[j] == '#' )
            {
                if (!y.empty())
                    y.pop_back();
                j++;
            }
        }
        return x == y;
    }
};