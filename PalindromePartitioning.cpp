
class Solution {
public:
    bool IsPalindrome(string str, int startIdx, int endIdx)
    {
        while (startIdx < endIdx)
        {
            if(str[startIdx] != str[endIdx])
                return false;
            startIdx++;
            endIdx--;
        }
        return true;
    }
    void DFS(string& str, int startIdx, vector<string>& curSubStrs, vector<vector<string>>& result)
    {
        if (startIdx == str.size())
        {
            result.push_back(curSubStrs);
            return;
        }
        for (int i = startIdx; i < str.size(); ++i)
        {
            if ( IsPalindrome(str, startIdx, i) )
            {
                curSubStrs.push_back(str.substr(startIdx, i-startIdx+1));
                DFS(str, i+1, curSubStrs, result);
                curSubStrs.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> curSubStrs;
        vector<vector<string>> result;
        DFS(s, 0, curSubStrs, result);
        return result;
    }
};