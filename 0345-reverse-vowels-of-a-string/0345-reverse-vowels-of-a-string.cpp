class Solution {
private:
    bool is_vowel(char c)
    {
        c = tolower(c);
        return c == 'a' || c == 'e'|| c == 'i'|| c == 'o'|| c == 'u';
    }
public:
    string reverseVowels(string s) {
        int start = 0 , end = s.length()-1;
        while(start <= end)
        {
            if (!is_vowel(s[start]))
                start++;
            else if (!is_vowel(s[end]))
                end--;
            else
                swap(s[start++],s[end--]);
        }   
        return s;
    }
};