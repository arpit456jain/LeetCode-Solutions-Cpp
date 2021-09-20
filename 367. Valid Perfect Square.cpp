class Solution {
public:
    bool isPerfectSquare(int x) {
        for (long long int i = 1; i <= x; i++)
        {
            // T.C : O(sqrt(x))
            if (i * i == x)
                return true;
        }
        return false;
    }
};