class Solution {
public:
    int optimizeApproch(vector<int>& arr, int n)
    {
        // Create two arrays left and right of size n. create a variable max_ = INT_MIN.
        int max1 = arr[0];
        int prefixMax[n];
        int prefixMin[n];
        // Run one loop from start to end. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign left[i] = max_
        for (int i = 0; i < n; i++)
        {
            // O(n)
            max1 = max(max1, arr[i]);
            prefixMax[i] = max1;
        }
        max1 = arr[n - 1];
        // Run another loop from end to start. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign right[i] = max_
        for (int i = n - 1; i >= 0; i--)
        {
            // O(n)
            max1 = max(max1, arr[i]);
            prefixMin[i] = max1;
        }
        int total_water = 0;
        // The amount of water that will be stored in this column is min(a,b) – array[i],(where a = left[i] and b = right[i]) add this value to total amount of water stored
        for (int i = 0; i < n; i++)
        {
            total_water += min(prefixMax[i],prefixMin[i]) - arr[i];
        }
        // return the total amount of water stored.
        return total_water;
    }
    int trap(vector<int>& arr) {
        int n = arr.size();
        int ans = optimizeApproch(arr, n); // T.C : O(n)
        return ans;
    }
};