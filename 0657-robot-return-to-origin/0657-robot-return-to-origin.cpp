class Solution {
public:
    bool judgeCircle(string moves) {
        int r = 0, l = 0, u = 0, d = 0;
        for (char c : moves)
        {
            if (c == 'L')
                l++;
            else if (c == 'R')
                r++;
            else if (c == 'U')
                u++;
            else
                d++;
        }
        return (l == r && u == d);
    }
};