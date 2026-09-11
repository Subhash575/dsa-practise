class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        int res = 0;

        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    res += 1;
                    q.push({i, j});
                    vis[i][j] = 1;
                    while (!q.empty()) {
                        int row = q.front().first;
                        int col = q.front().second;
                        q.pop();

                        for (int delrow = -1; delrow <= 1; delrow++) {
                            for (int delcol = -1; delcol <= 1; delcol++) {
                                if (abs(delrow) == abs(delcol))
                                    continue;

                                int nbrRow = row + delrow;
                                int nbrCol = col + delcol;

                                if (nbrRow >= 0 && nbrRow < n && nbrCol >= 0 &&
                                    nbrCol < m && !vis[nbrRow][nbrCol] &&
                                    grid[nbrRow][nbrCol] == '1') {
                                    q.push({nbrRow, nbrCol});
                                    vis[nbrRow][nbrCol] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        return res;
    }
};