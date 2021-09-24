class Solution {
public:
    int optimizeApproch(vector<int>& arr,int low,int high, int n)
	{
		int mid = low + (high - low)/2 ;
	    if ((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
        return mid;
  

        else if (mid > 0 && arr[mid-1] > arr[mid])
            return optimizeApproch(arr, low, (mid -1), n);

        else 
            return optimizeApproch(arr, (mid + 1), high, n);

	}
    int findPeakElement(vector<int>& arr) {
        int ans;
        int n = arr.size();
        if(n<=1)
            return 0;
	  ans = optimizeApproch(arr,0,n-1,n);
        cout<<ans;
      return ans;
    }
};