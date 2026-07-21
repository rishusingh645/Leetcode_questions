class Solution {
public:
    string reverseWords(string s) {
        int start = 0, end = s.length()-1;
        while (start <= end && s[start] == ' ')
            start++;
        while (end >= start && s[end] == ' ')
            end--;
        string result = "";
        int right = end;
        while (right >= start)
        {
            while (right >= start && s[right] == ' ')
                right--;
            if (right < start)
                break;
            int left = right;
            while (left >= start && s[left] != ' ')
                left--;
            string temp = s.substr(left +1, right - left);
            if (!result.empty())
                result += ' ';
            result += temp;
            right = left;            
        }
        return result;
    }
};