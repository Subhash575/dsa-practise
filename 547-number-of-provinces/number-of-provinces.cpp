class Solution {
public:

    void bfs(vector<vector<int>>&adj, vector<int>&vis, queue<int>&q, int node){
        q.push(node);
        vis[node] = 1;
        while(!q.empty()){
            int f = q.front();
            q.pop();
            for(int nbr: adj[f]){
                if(!vis[nbr]){
                    q.push(nbr);
                    vis[nbr] = 1;
                }
            }

        }

        return;
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>vis(n, 0);
        int res = 0;

        vector<vector<int>>adj(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j && isConnected[i][j] ){
                    adj[i].push_back(j);
                }
            }
        }

        queue<int>q;

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                res+=1;
               bfs(adj, vis, q, i);
            }
        }

        return res;
      
    }
};