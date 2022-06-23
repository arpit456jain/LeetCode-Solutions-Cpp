class Solution {
public:
    void printarray(vector<int>& digits)
    {
        for(int i=0;i<digits.size();i++)
            cout<<digits[i];
    }
    vector<int> plusOne(vector<int>& digits) {
        
        //reverse array
        reverse(digits.begin(),digits.end());
        
        
        //logic 
        bool loop = true;
        int i=0;
        int carry  = 1;
        while(loop and i<digits.size())
        {
            digits[i]+= carry;
            loop = false;
            carry = 0;
            if(digits[i]>=10)
            {
                digits[i] = digits[i]%10;
                i++;
                loop = true;
                carry = 1;
            }
        }
        if(carry == 1)
            digits.push_back(1);
        printarray(digits);
        //reverse again
        reverse(digits.begin(),digits.end());       
        
        return digits;
    }
};