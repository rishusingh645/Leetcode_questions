class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        string carry = "";
        int i = a.length()-1, j = b.length()-1;
        while (i >= 0 || j >= 0 )
        {
            char x = (i >= 0) ? a[i] : '0';
            char y = (j >= 0) ? b[j] : '0';
            if ((x == '0' && y== '1') || (x == '1' && y== '0'))
                {
                    if (!carry.empty())
                        result += '0';
                    else
                        result += '1';
                }
            else if (x == '0' && y== '0')
                {
                    if (!carry.empty())
                    {
                        result += '1';
                        carry.pop_back();
                    }
                    else
                        result += '0';
                }
            else
            {
                if (carry.empty())
                {
                    carry += '1';
                    result += '0';
                }
                else
                    result += '1';
            }
            i--;
            j--;
        }
        result += carry;
        reverse(result.begin(),result.end());
        return result;
    }
};