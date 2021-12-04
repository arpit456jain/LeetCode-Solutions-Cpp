class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int rightsum;
        rightsum = accumulate(a.begin(), a.end(), 0);
        int leftsum=0;
        for(int i=0;i<a.size();i++)
        {
            rightsum -= a[i];
            if(leftsum == rightsum)
                return i;
            leftsum += a[i];
            
            // cout<<leftsum<<" "<<rightsum<<"\n"; 
            
        }
        return -1;
    }
};