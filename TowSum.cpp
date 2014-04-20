//by zen 2014.04.20
//map 红黑树 查找快速
//暴力查找超时,暴力超时代码：
/*
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {  
        // IMPORTANT: Please reset any member data you declared, as  
        // the same Solution instance will be reused for each test case.  
        int i,j;  
        vector<int> ret;  
        for (i=0;i<numbers.size();i++)  
        {  
            for (j=i+1;j<numbers.size();j++)  
            {  
                if (numbers[i]+numbers[j]==target)  
                {  
                    ret.push_back(i);  
                    ret.push_back(j);  
                    return ret;  
                }  
            }  
        }  
        return ret;  
  
    } 
};
*/
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {  
        map<int, int> m;
        map<int, int>::iterator p;
        vector<int> ret;  
        for (i=0;i<numbers.size();i++)  
        {  
            int temp = target - numbers[i];
            p = m.find(temp);
            if(p!=m.end())
            {
                ret.push_back(p->second);
                ret.push_back(i);
            }  
            p= m.find(numbers[i]);
            if(p==m.end())
                m[numbers[i]]=i;
        }  
        return ret;  
    } 
};
