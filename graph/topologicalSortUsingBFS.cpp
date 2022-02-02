// toposort using BFS
vector<int> topoSort(int V, vector<int> adj[]) 
{
    vector<int>topo;
    vector<int>inDegree(V, 0);

    for(int i=0;i<V;i++)
    {
        for(auto it: adj[i])
            inDegree[it]++;
    }
    queue<int>q;
    for(int i=0;i<V;i++)
    {
        if(inDegree[i]==0)
            q.push(i);
    }
    while(!q.empty())
    {
        int a = q.front();
        q.pop();
        topo.push_back(a);
        for(auto it: adj[a])
        {
            --inDegree[it];
            if(inDegree[it]==0)
                q.push(it);
        }
    }
    return topo;
}