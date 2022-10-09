class Solution{
    bool there_is_conflict = 0;
void DFS(int node,vector<vector<int>>&graph,vector<int>&color,int cur_color=1){
    if(color[node]==0)// not visited yet
        color[node] = cur_color;
    else{
        if(color[node]!=cur_color)
            there_is_conflict = 1;
        return;
    }
    for(auto neighbour:graph[node]){
        DFS(neighbour, graph, color, 3 - cur_color);
    }
}
public:
    bool isBipartite(vector<vector<int>>&graph){
        vector<int> colors((int)graph.size());
        for (int i = 0; i < graph.size();i++){
            if(colors[i]==0){
                DFS(i, graph, colors); 
                if(there_is_conflict){
                    return false;
                }
            }
        }
        return true;
    }
};