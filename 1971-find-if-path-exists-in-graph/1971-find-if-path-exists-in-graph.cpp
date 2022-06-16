class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int end) {
        queue<int> q;
        vector<bool> seen(n,false);
        
        vector<vector<int>> adjList(n);
        int v,u,currvertex,secondvertex;
        
        for(int i=0;i<edges.size();i++)
        {
            u=edges[i][0];
            v=edges[i][1];
            
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        
        }
        
        q.push(source);
        seen[source]=true;
        
        while(!q.empty())
        {
            currvertex=q.front();
            
            while(!q.empty())
            {
                currvertex=q.front();
                
                for(int i=0;i<adjList[currvertex].size();i++)
                {
                    secondvertex=adjList[currvertex][i];
                    if(!seen[secondvertex])
                    {
                        q.push(secondvertex);
                        seen[secondvertex]=true;
                    }
                }
                
                q.pop();
            }
            if(seen[end])
                return true;
            return false;
        }
    return 0;
}
};