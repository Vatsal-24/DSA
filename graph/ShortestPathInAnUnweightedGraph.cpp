vector<int> printGraph(vector<int> adj[], int n, int src)
{
    vector<int>dis(n,INT_MAX);
    queue<int>q;
    q.push(src);
    dis[0] = 0;
    
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto it:adj[node])
        {
            if(dis[it]>dis[node]+1)
            {
                dis[it] = dis[node]+1;
                q.push(it);
            }
        }
    }
    return dis;
}
