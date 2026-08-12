class Solution {
public:
    string reversePrefix(string word, char ch) {
        int end = -1;
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == ch)
            {
                end = i;
                break;
            }
        }
        if (end != -1)
        {
            int start = 0;
            while (start < end)
                swap(word[start++],word[end--]);
        }
        return word;
    }
};