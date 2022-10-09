void add_undirected_edge(unordered_map<int, vector<int>> &graph, int from, int to) {
	graph[from].push_back(to);
	graph[to].push_back(from);
}

void dfs(unordered_map<int, vector<int>> &graph, int node, unordered_set<int> &visited, vector<int> &nodes) {
    visited.insert(node);
	nodes.push_back(node);

	for (int neighbour : graph[node]) {
		if (!visited.count(neighbour))
			dfs(graph, neighbour, visited, nodes);
	}
}

class Solution {
public:
	vector<int> restoreArray(vector<vector<int>> &pairs) {
		int node = pairs.size() + 1;
		unordered_map<int, vector<int>> adj;

		for (auto &pair : pairs)
			add_undirected_edge(adj, pair[0], pair[1]);

		unordered_set<int> vis;
		vector<int> nodes;

		for (auto &node_adj : adj) {
			if (node_adj.second.size() == 1) {
				dfs(adj, node_adj.first, vis, nodes);
				break;
			}
		}
		return nodes;
	}
};