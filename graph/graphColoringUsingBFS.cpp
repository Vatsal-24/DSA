//graph coloring using BFS

bool checkForBipartite(int src,int V,vector<int> adj[],vector<int> &color){
    queue<int> q;
    color[src]=1;
    q.push(src);
    
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        
        for(auto nbr: adj[cur]){
            if(color[nbr]==-1){
                color[nbr]=1 - color[curr];
                q.push(nbr);
            }
            else if(color[cur]==color[nbr]){
                return false;
            }
        }
    }
    return true;
}

bool isBipartite(int V, vector<int> adj[]) {
    vector<int> color(V+1,-1);
    for(int i=0;i<V;i++){
        if(color[nbr]==-1)
            if(!checkForBipartite(i,V,adj,color)){
                return false;
            }
    }
    return true;
}
