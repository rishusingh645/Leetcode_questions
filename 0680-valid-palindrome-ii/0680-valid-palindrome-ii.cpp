class Solution {
private:
    bool valid(string &s, int i,int j)
    {
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int beg = 0, end = s.length()-1;
        int flag = 0;
        while (beg <= end)
        {
            if (s[beg] != s[end])
                return valid(s,beg,end-1) || valid(s,beg+1,end);
            beg++;
            end--;
        }
        return true;
    }
};