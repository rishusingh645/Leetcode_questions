class Solution {
public:
    int maxProduct(int n) {
        int first_max = 0, second_max = 0;
        while (n > 0)
        {
            int current = n % 10;
            if (current > first_max)
            {
                second_max = first_max;
                first_max = current;
            }
            else if (current > second_max)
                second_max = current;
            n /= 10;
        }
        return first_max * second_max;
    }
};