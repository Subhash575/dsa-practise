class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        // 1 based indexing
        int n = isConnected.size();
        vector<vector<int>>graph(n+1);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j && isConnected[i][j]){
                  graph[i+1].push_back(j+1);
                }
            }
        }

        int res = 0;
        vector<int>vis(n+1, 0);
        queue<int>q;

        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                res += 1;
                dfsTraversal(graph, vis, i);
            }

        }

        return res;
        
    }

    void dfsTraversal(vector<vector<int>>&graph, vector<int>&vis, int node){
        vis[node] = 1;
        for(int nbr : graph[node]){
            if(!vis[nbr]){
                dfsTraversal(graph, vis, nbr);
            }
        }

        return;
    }
};