class Solution {
public:
    bool dfs(string word, int dep, int maxdep, vector<vector<char>> &board, int x, int y, vector<vector<bool>> &visit, int dir[4][2]) {
        if (dep == maxdep) return true;
        int m = board.size();
        int n = board[0].size();
        for (int i = 0; i < 4; i++) {
            int xx = x + dir[i][0];
            int yy = y + dir[i][1];
            if (xx >= 0 && xx < m && yy >= 0 && yy < n && board[xx][yy] == word[dep] && !visit[xx][yy]) {
                visit[xx][yy] = true;
                if (dfs(word, dep+1, maxdep, board, xx, yy, visit, dir)) return true;
                visit[xx][yy] = false;
            }
        }
    }
    bool exist(vector<vector<char> > &board, string word) {
        int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        int m = board.size();
        if (!m) return false;
        int n = board[0].size();
        if (!word.size()) return true;
        vector<vector<bool>> visit(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (word[0] == board[i][j]) {
                    visit[i][j] = true;
                    bool flag = false;
                    if (dfs(word, 1, word.size(), board, i, j, visit, dir)) return true;
                    visit[i][j] = false;
                }
            }
        }
        return false;
    }
};