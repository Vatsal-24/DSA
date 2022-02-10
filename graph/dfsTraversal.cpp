// ***dfs***
void dfsUtil(vector<int> adj[], int V, vector<int>&dfs, vector<int>&vis)
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

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    
    vector<int>dfs;
    vector<int>vis(V,0);
    fot(int i=0;i<=V;i++)
    {
        if(!vis[i])
            dfsUtil(adj, i, dfs, vis);
    }
    return dfs;    
}

