class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i=0;
        int j=0;
        int maxcount = 0;
        int maxele = 0;
        int count=0;
        sort(nums.begin(),nums.end());
        if(nums.size() == 1)
            return nums[0];
        while(j<nums.size()-1)
        {
            if(nums[j] == nums[j+1])
            {
                j++;
                continue;
            }
            else
            {
                // cout<<j-i+1;
                count = j-i+1;
                if(count > maxcount)
                {
                    maxcount = count;
                    maxele = nums[j];
                }
                j=j+1;
                i=j;
            }
        }
        count = j-i+1;
                if(count > maxcount)
                {
                    maxcount = count;
                    maxele = nums[j];
                }
    return maxele;
    }
};