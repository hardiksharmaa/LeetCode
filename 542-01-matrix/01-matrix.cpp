class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        queue<pair<int, int>> q;

        // Initialize the queue with all 0 cells and set their distance to 0
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    q.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }

        // Direction vectors for moving up, down, left, right
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        // Perform BFS
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                // Check bounds and update the distance if a shorter distance is found
                if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && dist[nrow][ncol] > dist[row][col] + 1) {
                    dist[nrow][ncol] = dist[row][col] + 1;
                    q.push({nrow, ncol});
                }
            }
        }

        return dist;
    }
};