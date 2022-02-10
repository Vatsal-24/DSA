bool checkForCycle(int node, vector<int>&vis, vector<int>&dfs, vector<int> adj[])
    {
        vis[node] = 1;
        dfs[node] = 1;
        
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                if(checkForCycle(it, vis, dfs, adj))
                    return true;
            }
            else if(dfs[it]==1)
                return true;
        }
        dfs[node] = 0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        vector<int>dfs(V, 0);
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(checkForCycle(i, vis, dfs, adj))
                    return true;
            }
        }
        return false;
    }