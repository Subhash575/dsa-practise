class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();
        vector<vector<int>>graph(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j && isConnected[i][j]){
                  graph[i].push_back(j);
                  graph[j].push_back(i);
                }
            }
        }

        int res = 0;
        vector<int>vis(n);
        queue<int>q;

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                q.push(i);
                vis[0] = 1;
                res += 1;
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    for(int nbr: graph[node]){
                        if(!vis[nbr]){
                            q.push(nbr);
                            vis[nbr] = 1;
                        }
                    }
                }
            }

        }

        return res;
        
    }
};