class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int pos=0;
        int n=arr.size();
      int maxele = arr[0];
      for(int i=1;i<n;i++)
      {
          if(arr[i]>maxele)
          {
              maxele = arr[i];
              pos = i;
          }
      }
      return pos;
    }
};