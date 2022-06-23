class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        // for(int i=0;i<cost.size();i++)
        //     cout<<cost[i]<<" ";
        
        cout<<"\n";
        int skip = 0;
        int count =0;
        int total = 0; 
        for(int i=cost.size()-1;i>=0;i--)
        {
            
            if(count == 2)
            {
                count = 0;
                 continue;
            }
             count++; 
            cout<<cost[i]<<" "<<total<<"\n";
              
            total += cost[i];
            
              
            
        }
        
        // cout<<total;
        return total;
    }
};