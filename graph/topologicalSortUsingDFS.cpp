// topo sort using DFS
void topoSortDFS(vector<int> adj[], int V, vector<int>&topo, vector<int>&vis)
{
        vis[V] = 1;
        for(auto it: adj[V])
        {
            if(!vis[it])
            {
                topoSortDFS(adj, it, topo, vis);
            }
        }
        topo.push_back(V);
}

vector<int> topoSort(int V, vector<int> adj[]) 
{
    vector<int>topo;
    vector<int>vis(V,0);

    for(int i=0;i<V; i++)
    {
        if(!vis[i])
            topoSortDFS(adj, i, topo, vis);
    }
    reverse(topo.begin(), topo.end());
    return topo;
}
