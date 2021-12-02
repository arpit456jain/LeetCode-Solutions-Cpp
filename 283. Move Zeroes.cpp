class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        bool flag = true;
        int i=0;
      
        while(flag)
        {
            flag = false;
            for(int i=0;i<nums.size()-1;i++)
                {
                    if(nums[i+1]!=0 && nums[i]==0)
                    {
                    swap(nums[i],nums[i+1]);
                    flag = true;
                    }
            
                }
            
            if(flag == false)
            break;
        }
    }
};