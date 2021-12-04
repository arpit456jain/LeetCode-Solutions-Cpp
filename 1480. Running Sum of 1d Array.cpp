class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     vector<int> sum1;
        int sum2 = 0;
        for(int i=0;i<nums.size();i++)
        {
                     sum2 = sum2 + nums[i];
                     sum1.push_back(sum2);
        }
        
        return sum1;
    }
};