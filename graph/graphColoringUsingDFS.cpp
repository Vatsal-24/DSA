bool checkForBipartite(int curr, vector<int>adj[], vector<int>&color)
{

        if(color[curr]==-1) color[curr] = 1;
        for(auto it: adj[curr])
        {
            if(color[it]==-1)
            {
                color[it] = 1 - color[curr];
                if(!checkForBipartite(it,adj,color))
                    return false;
            }
            else if(color[it] == color[curr])
            {   
                return false;
            }
        }
        return true;   
}

bool isBipartite(int V, vector<int>adj[]){
    vector<int> color(V,-1);
    for(int i=0;i<V;i++){
        if(color[i]==-1)
        {
            if(!checkForBipartite(i,adj,color)){
                return false;
            }   
        }
    }
return true;
}