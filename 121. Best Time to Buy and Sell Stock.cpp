class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int P,minx;
        P=0;
        minx = prices[0];
        for(int i=0;i<prices.size();i++)
        {
           P = max(P,prices[i] - minx);
            minx = min(minx,prices[i]);
        }
        
    return P;
    }
};