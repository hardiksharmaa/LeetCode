class Solution {
public:
    int m, n;  // Class-level variables to store grid dimensions

    void DFS(vector<vector<char>>& grid, int i, int j) {
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != '1') return;

        grid[i][j] = '0';  // Mark the cell as visited
        DFS(grid, i + 1, j);
        DFS(grid, i - 1, j);
        DFS(grid, i, j + 1);
        DFS(grid, i, j - 1);
    }

    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {  // Found an unvisited part of an island
                    DFS(grid, i, j);
                    count++;  // Increase the island count
                }
            }
        }
        return count;
    }
};