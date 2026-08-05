class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string c : words)
        {
            string t = c;
            reverse(t.begin(),t.end());
            if(t == c)
                return c;
        }
        return "";
    }
};