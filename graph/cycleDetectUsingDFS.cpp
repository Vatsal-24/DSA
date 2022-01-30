bool dfsUtil(vector<int> adj[], int V, int par, vector<int>&vis)
{
    vis[V] = 1;
    for(auto it: adj[V])
    {
        if(!vis[it])
        {
            if(dfsUtil(adj, it, V, vis)) return true;
        }
        else if(it!=par)
            return true;
    }
return false;
}

bool isCycle(int V, vector<int> adj[]) {
    // Code here
    vector<int>dfs;
    vector<int>vis(V+1,0);
    
    for(int i=0;i<V; i++)
    {
        if(!vis[i])
        {
            if(dfsUtil(adj, i, -1, vis))
                return true;    
        }
    }
    return false;
    
}