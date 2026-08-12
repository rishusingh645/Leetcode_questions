class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string output = "";
        int i = 0, j = 0, k = 0;
        while (k < word1.length() + word2.length())
        {
            if (i == word1.length())
                output += word2[j++];
            else if (j == word2.length())
                output += word1[i++];
            else if (k % 2 == 0)
                output += word1[i++];
            else
                output += word2[j++];
            k++;
        }
        return output;
    }
};