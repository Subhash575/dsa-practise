class Solution {
public:
   
   void traversal(int row, int col, vector<vector<char>>&grid, 
    vector<vector<int>>&vis ){
        int m = grid.size();
        int n = grid[0].size();
        vis[row][col] = 1;
        // traversal accross the neighbour
        for(int delRow = -1; delRow <= 1; delRow++){
            for(int delCol = -1; delCol <= 1; delCol++){
                if(abs(delRow) == abs(delCol)) continue;

                int nbrRow = row + delRow;
                int nbrCol = col + delCol;

                if(nbrRow >= 0 && nbrRow < m && nbrCol >= 0 && nbrCol < n
                && vis[nbrRow][nbrCol] == 0 && grid[nbrRow][nbrCol] == '1'){
                    traversal(nbrRow, nbrCol, grid, vis);
                }
            }
        }
    
    }


    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>vis(m, vector<int>(n, 0));
        int res = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    res+=1;
                    traversal(i, j, grid,vis);
                }
            }
        }
        return res;   
    }
};