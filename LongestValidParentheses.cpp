//解法一，匹配
class Solution {
public:
    int longestValidParentheses(string s) {
        
        if(s.size()==0)
            return 0;
        int ret=0;
        int a[s.size()];
        int current=0;
        int j=0;
        int left=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                a[j++]=i;
                continue;
            }
            if(s[i]==')')
            {
                if(j>0)
                {
                    j--;
                    if(j==0)
                    {
                        current = max(current,i-left+1);
                    }
                    else
                    {
                        current = max(current,i-a[j-1]);
                    }
                    if(current>ret)
                        ret=current;
                }
                else
                {
                    current=0;
                    left=i+1;
                }
            }
        }
        return ret;
    }
};
//解法二：很巧妙，别人的解法
/*设置matched数组记录每一位是否配对成功

while

{
    
    找到未配对成功的第一个）位于位置i
    
    找到距离i最近的左边的未配对成功的j
    
    配对i和j，设置matched[i]=matched[j]=1
    
}
    
找到matched数组中最长的连续1，即所求
*/
class Solution {
public:
    int longestValidParentheses(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> matched(s.length(),0);
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==')')
            {
                int j=i-1;
                while( j>=0 && !(matched[j]==0 && s[j]=='('))
                {
                    j--;
                }
                if(j>=0)
                {
                    //match i and j
                    matched[i]=matched[j]=1;
                }
            }
        }
        //find the longest consecutive substring 11111... in matched
        int longest=0;
        for(int i=0;i<matched.size();i++)
        {
            int tmplong=0;
            while(i<matched.size() && matched[i]==0) {i++;}
            
            while(i<matched.size() && matched[i]==1)
            {
                tmplong++;
                i++;
            }
            if(tmplong>longest) longest=tmplong;
        }
        return longest;
    }
};

