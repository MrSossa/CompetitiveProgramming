//https://leetcode.com/problems/all-paths-from-source-to-target/

class Solution {
public:
    vector<vector<int>> vec;
    vector<int> aux;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(graph,0);
        return vec;
    }
    
    void dfs(vector<vector<int>>& graph,int v){
        aux.push_back(v);
        if (v==graph.size()-1){
            vec.push_back(aux);
            return;
        }
        for (int i = 0; i < graph[v].size();++i){
            dfs(graph,graph[v][i]);
            aux.pop_back();
        }
    }
};