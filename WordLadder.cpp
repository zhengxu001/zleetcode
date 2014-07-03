class Solution {
public:
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(start.size()!=end.size()) return 0;
        if(start == end) return 2;
        
        int min_value = 0;
        unordered_set<string> unique;
        unique.insert(start);
        
        queue<string> que;
        que.push(start);
        int q1=1;
        int q2=0;
        
        while(q1>0) {
            string s = que.front();
            que.pop();
            --q1;
            
            for(int i=0; i<s.size(); i++) {
                string temp = s;
                for(char c='a'; c<='z'; c++) {
                    temp[i] = c;
                    if(dict.find(temp)!=dict.end() && unique.find(temp)==dict.end()) {
                        if(temp == end) {
                            return min_value+2;
                        } else {
                            unique.insert(temp);
                            que.push(temp);
                            ++q2;
                        }
                    }
                }
            }
            
            if(q1==0) {
                q1 = q2;
                q2 = 0;
                ++min_value;
            }
        }
        return 0;
    }
};