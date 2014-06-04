class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> p;
        p.push_back(1);
        int i=digits.size()-1;
        while(i>=0)
        {
            if(digits[i]==9&&i==0)
            {
                digits[i]=0;
                for(int i=0;i<digits.size();i++)
                    p.push_back(digits[i]);
                return p;
            }
            if(digits[i] == 9)
            {
                digits[i] = 0;
                i--;
                continue;
            }
            else
            {
                digits[i] += 1;
                return digits;
            }
        }
        
    }
};