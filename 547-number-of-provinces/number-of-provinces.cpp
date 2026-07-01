class Solution {
public:

    void traversal(int node, vector<vector<int>>&graph, vector<int>&vis){
        vis[node] = 1;

        for(int nbr = 0; nbr < graph.size(); nbr++){
            if(graph[node][nbr] == 1 && vis[nbr] == 0){
                traversal(nbr, graph, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {

        // Using DFS and adjMatrix.
        int n = isConnected.size();
        vector<int>vis(n, 0);
        int res = 0;

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                res+=1;
                int node = i;
                traversal(node, isConnected, vis);
            }
        }
        
        return res;
        
    }
};