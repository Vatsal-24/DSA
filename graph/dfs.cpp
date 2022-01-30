// ***dfs***
vector<int> dfsUtil(vector<int> adj[], int V, vector<int>&dfs, vector<int>&vis)
{
    if(!vis[V])
    {
        dfs.push_back(V);
        vis[V] = 1;
        for(auto it: adj[V])
        {
            if(!vis[it])
            {
                dfsUtil(adj, it, dfs, vis);
            }
        }
    }
    return dfs;
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    
    vector<int>dfs;
    vector<int>vis(V,0);
    
    return dfsUtil(adj, 0, dfs, vis);
}

