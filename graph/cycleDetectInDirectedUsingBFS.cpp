bool isCyclic(int V, vector<int> adj[]) {
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
        int count=0;
        while(!q.empty())
        {
            int a = q.front();
            q.pop();
            topo.push_back(a);
            count++;
            for(auto it: adj[a])
            {
                --inDegree[it];
                if(inDegree[it]==0)
                    q.push(it);
            }
        }
        if(count==V)
            return false;
        return true;
    }