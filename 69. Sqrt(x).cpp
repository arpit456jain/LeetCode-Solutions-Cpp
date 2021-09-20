class Solution {
public:
    int mySqrt(long long int n) {
         int l = 0;
        int r = n;
        float ans;

        // for integral part only
        while (r >= l)
        {
           long long int mid = (r + l) / 2;
            if (mid * mid == n)
                return mid;

            else if (mid * mid < n)
            {
                ans = mid;
                l = mid + 1;
            }

            else
                r = mid - 1;
        }
        return ans;
    }
};