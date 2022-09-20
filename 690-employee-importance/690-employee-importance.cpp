/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
private:
    unordered_map<int, Employee *> mp;
public:
    vector<Employee *> graph;

    int getImportance(vector<Employee *> g, int id) {
        for (int i = 0; i < g.size(); i++) {
            mp[g[i]->id] = g[i];
        }
        return DFS(id);
    }

    int DFS(int node) {
        Employee *emp = mp[node];
        int result = emp->importance;
        for (auto it: emp->subordinates) {
            result += DFS(it);
        }
        return result;
    }

};