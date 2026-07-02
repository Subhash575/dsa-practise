class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        vector<vector<int>>res = image;
        queue<pair<int, int>>q;
        q.push({sr, sc});
        vis[sr][sc] = 1;
        int startingPixel = res[sr][sc];
        res[sr][sc] = color;
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int delrow = -1; delrow <= 1; delrow++){
                for(int delcol = -1; delcol <= 1; delcol++){
                    if(abs(delrow) == abs(delcol)) continue;

                    int nbrRow = row + delrow;
                    int nbrCol = col + delcol;

                    if(nbrRow >= 0 && nbrRow < n && nbrCol >= 0 && nbrCol < m
                    && res[nbrRow][nbrCol] == startingPixel && vis[nbrRow][nbrCol] == 0){
                        res[nbrRow][nbrCol] = color;
                        q.push({nbrRow, nbrCol});
                        vis[nbrRow][nbrCol] = 1;
                    }
                }
            }
            
        }

        return res;

    }
};