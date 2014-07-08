class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        vector<vector<int> > ret;
        sort(num.begin(),num.end());
        for(int i=0;i<num.size();i++)
        {
            if(i>0&&num[i]==num[i-1])
                continue;
            for(int j=i+1;j<num.size();j++)
            {
                if(j>i+1&&num[j]==num[j-1])
                    continue;
                int k=j+1;
                int m=num.size()-1;
                while(k<m)
                {
                    while(k>j+1&&num[k]==num[k-1])
                        k++;
                    while(m<num.size()-1&&num[m]==num[m+1])
                        m--;
                    if(k>=m)
                        break;
                    if(num[i]+num[j]+num[k]+num[m]<target)
                        k++;
                    else if(num[i]+num[j]+num[k]+num[m]>target)
                        m--;
                    else
                    {
                        vector<int> tmp;
                        tmp.push_back(num[i]);
                        tmp.push_back(num[j]);
                        tmp.push_back(num[k]);
                        tmp.push_back(num[m]);
                        ret.push_back(tmp);
                        k++;
                    }
                }
            }
        }
        return ret;
    }
};