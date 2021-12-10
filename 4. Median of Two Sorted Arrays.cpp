class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr, vector<int>& brr) {
        // code here
        int n= arr.size();
        int m = brr.size();
        int temp[m+n];
        int i=0;
        int j=0;
        int k=0;
        while(i<n && j<m)
        {
            if(arr[i]<brr[j])
            temp[k++] = arr[i++];
            
            else if(arr[i]>brr[j])
            temp[k++] = brr[j++];
            
            else
            {
            temp[k++] = arr[i++];
            temp[k++] = brr[j++];
            }

        }
        
        cout<<i<<" "<<j;
        while(i<n)
        temp[k++] = arr[i++];
        
        while(j<m)
        temp[k++] = brr[j++];
        
        
        if((m+n)%2 == 0)
        {
            cout<<"even";
            int median_index1 = (m+n)/2 - 1;
            int median_index2= (m+n)/2;
            return (double(temp[median_index1]) + double(temp[median_index2]))/2;
            
        }
        else
        {
            cout<<"odd";
        int median_index = (m+n)/2;    
        return double(temp[median_index]);
        }
        return 0;      
    }
};