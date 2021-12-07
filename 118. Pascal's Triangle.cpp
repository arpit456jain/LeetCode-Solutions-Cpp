class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> arr,arr2;
        vector<vector<int>> mainarray;
        
        arr.push_back(1);
        
        mainarray.push_back(arr);
        if (numRows == 1)
            return mainarray;
        
        
        arr2.push_back(1);
        arr2.push_back(1);
        mainarray.push_back(arr2);
        if (numRows == 1)
            return mainarray;
        
        if(numRows>2)
        { 
            // main code
            int i,j;
            for(int k=1;k<=numRows-2;k++)
            {
               i=0;
                j=1;
                vector<int> arr;
                arr.push_back(1);
                for(int l=0;l<mainarray[k].size()-1;l++)
                {
                    arr.push_back(mainarray[k][i] + mainarray[k][j]);
                    i++;
                    j++;
                }
               arr.push_back(1); 
                mainarray.push_back(arr);
            }
            //main code end
            
            
            
        }
        
        
        
        return mainarray;
        
    }
};