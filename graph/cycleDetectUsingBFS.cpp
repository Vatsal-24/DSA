// bfs for cycle detection in undirected graph
bool BFS(int src,int V,vector<int> adj[],vector<int> &visited){
    queue<pair<int,int>> q;
    
    visited[src]=true;
    q.push({src,-1});
    
    while(!q.empty()){
        int cur=q.front().first;
        int parent=q.front().second;
        q.pop();
        
        for(auto nbr: adj[cur]){
            if(!visited[nbr]){
                visited[nbr]=true;
                q.push({nbr,cur});
            }
            else if(nbr!=parent){
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[]) {
    vector<int> visited(V+1,0);
    for(int i=0;i<V;i++){
        if(!visited[i])
            if(BFS(i,V,adj,visited)){
                return true;
            }
    }
    return false;
}
