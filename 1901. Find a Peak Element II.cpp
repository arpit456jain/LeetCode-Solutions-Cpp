class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int> arr;
        int m = mat.size();
        int n = mat[0].size();
        int posi=0;
        int posj=0;
        int maxele = mat[0][0];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                 if(mat[i][j]>maxele)
                  {
                      maxele = mat[i][j];
                      posi = i;
                     posj = j;
                  }
            }
        }
        
        arr.push_back(posi);
        arr.push_back(posj);
        return arr;
    }
};