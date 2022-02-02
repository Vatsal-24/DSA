// topo sort using DFS
void topoSort(vector<int> adj[], int V, stack<int>&st, vector<int>&vis)
{
        vis[V] = 1;
        for(auto it: adj[V])
        {
            if(!vis[it])
            {
                topoSort(adj, it, st, vis);
            }
        }
        st.push(V);
}

    vector<int> topoSort(int V, vector<int> adj[]) 
    {
        vector<int>topo;
        vector<int>vis(V,0);
        stack<int>st;
    
        for(int i=0;i<V; i++)
        {
            if(!vis[i])
                topoSort(adj, i, st, vis);
        }
    
        while(!st.empty())
        {
            topo.push_back(st.top());
            st.pop();
        }
        return topo;
    }