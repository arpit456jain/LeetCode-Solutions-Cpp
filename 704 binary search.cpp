class Solution {
public:
    int search(vector<int>& arr, int k) {
      int n = arr.size();
         int l = 0;
        int r=n-1;
       if(n == 1)
       {
           if(arr[0] == k)
               return 0;
           else
               return -1;
       }
        else
        {
            
        
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(arr[mid] == k)
            return mid;
            
            else if(k<arr[mid])
            r = mid -1 ;
            
            else
            l = mid+1;
        }
        // return binarySearch(arr,l,r,k);
    return -1;
            }
    }
};