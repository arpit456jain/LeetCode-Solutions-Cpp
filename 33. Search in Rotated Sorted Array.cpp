class Solution {
public:
    // K : given value whose index we need to find 
int optimizeApproch(vector<int> vec, int K)
{
        // if only one element
        if(vec.size() ==1 )
        {
            if(vec[0] == K)
                return 0;
            else
                return -1;
        }
    // logic is find piviot elements than divide tha array in  parts then applly binary search
    int pivot ;
    for(int i = 0; i < vec.size()-1;i++)
    {
        if(vec[i]>vec[i+1])
        {
            pivot = i;
            break;
        }

    }
    // now break the array 
    /*
     2) Now call binary search for one of the two sub-arrays.
      (a) If element is greater than 0th element then
             search in left array
      (b) Else Search in right array
    */
   int left ,right;
    if(K>=vec[0])
    {
        left = 0;
        right = pivot;
        // cout<<"element is in left array";
    }
    else
    {
        left = pivot + 1;
        right = vec.size()-1; 
        // cout<<"element is in right array";
    }
    // cout<<"\npivot pos is"<<pivot<<"element is"<<vec[pivot]<<endl;
   

    // cout<<"\n";

    // now just apply normal binary search on this array
        long long mid;
    while(left<=right){
    mid = (left+right)/2;
        if(vec[mid] == K)
            return mid;

        else if(vec[mid] > K)
            right = mid -1;
        
        else
        left = mid + 1;
    }
    return -1;
}
int naiveApproah(vector<int> vec, int K)
{
    
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i] == K)
        {
            return i;
        }
        
    }
    return -1;
}
    int search(vector<int>& vec, int K) {
        int ans=0;
    // ans = naiveApproah(vec,K);
    ans = optimizeApproch(vec,K);
    return ans;
    }
};