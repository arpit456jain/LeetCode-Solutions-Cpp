class Solution {
public:
    void reverseArray(vector<int>& arr,int first,int last,int n)
    {
        // T.C : O(n)
        int left = first;
        int right = last;
        // reverseArray(arr,left,right);    
        while(left<right)
            {
                    swap(arr[left],arr[right]);
                    left++;
                    right--;
            }
    }
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        
        k = k%n;
        // reverse last k eleemnts
         reverseArray(arr,n-k,n-1,n);  // O(n)
        // reverse n-k elelments from start
        reverseArray(arr,0,n-k-1,n);
        // reverse whole array
        reverseArray(arr,0,n-1,n);

    }
};