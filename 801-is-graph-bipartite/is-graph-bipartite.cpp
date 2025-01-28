class Solution {
    bool dfs(int node, int colour, vector<vector<int>> &graph, vector<int> &color) {
        color[node] = colour; // Color the current node
        for (auto neighbor : graph[node]) {
            if (color[neighbor] == -1) { 
                // If neighbor is uncolored, recursively color it with the opposite color
                if (!dfs(neighbor, 1 - colour, graph, color)) {
                    return false; // Conflict detected
                }
            } else if (color[neighbor] == colour) {
                return false; // Conflict detected
            }
        }
        return true; // Successfully colored this component
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1); // Initialize all nodes as uncolored
        
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) { 
                // If the node is uncolored, start DFS from it
                if (!dfs(i, 0, graph, color)) {
                    return false; // If any component is not bipartite, return false
                }
            }
        }
        return true; // All components are bipartite
    }
};