class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        sort(num.begin(),num.end());
        int end=999999;
        int symbol=1;
        for(int i=0;i<num.size();i++)
        {
            int j=i+1;
            int k=num.size()-1;
            while(j<k)
            {
                if(num[i]+num[j]+num[k]>target)
                {
                    int b=num[i]+num[j]+num[k]-target;
                    if(end>b)
                    {
                        end=b;
                        symbol=1;
                    }
                    k--;
                }
                else if(num[i]+num[j]+num[k]<target)
                {
                    int b=-(num[i]+num[j]+num[k]-target);
                    if(end>b)
                    {
                        end=b;
                        symbol=-1;
                    }
                    j++;
                }
                else return target;
            }
        }
        return end*symbol+target;
    }
};