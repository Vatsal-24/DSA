// ***bfs***

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int>bfs;
        vector<int>vis(V, 0);
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                queue<int>q;
                q.push(i);
                vis[i]=1;
                while(!q.empty())
                {
                    int a = q.front();
                    q.pop();
                    bfs.push_back(a);
                    for(auto it: adj[a])
                    {
                        if(!vis[it])
                        {
                            q.push(it);
                            vis[it]=1;
                        }
                    }
                }
            }
        }
        return bfs;
}