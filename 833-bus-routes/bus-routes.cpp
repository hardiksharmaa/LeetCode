class Solution {
    public:
        int numBusesToDestination(vector<vector<int>>& edges, int src, int dst) {
                unordered_map<int, vector<pair<int, int>>> adj;
                        unordered_map<int, int> dis;
                                int m = edges.size();
                                        int n = 1e6;

                                                for (int i = 0; i < m; i++) {
                                                            int a = n++;
                                                                        int x = edges[i].size();
                                                                                    dis[a] = 1e9;

                                                                                                for (int b : edges[i]) {
                                                                                                                adj[a].push_back({b, 0});
                                                                                                                                adj[b].push_back({a, 1});
                                                                                                                                                dis[b] = 1e9;
                                                                                                                                                            }
                                                                                                                                                                    }

                                                                                                                                                                            deque<pair<int, int>> q;
                                                                                                                                                                                    q.push_back({src, 0});
                                                                                                                                                                                            dis[src] = 0;

                                                                                                                                                                                                    while (q.size()) {
                                                                                                                                                                                                                auto pr = q.front();
                                                                                                                                                                                                                            q.pop_front();

                                                                                                                                                                                                                                        int v = pr.first;
                                                                                                                                                                                                                                                    int d = pr.second;

                                                                                                                                                                                                                                                                if (v == dst)
                                                                                                                                                                                                                                                                                return d;

                                                                                                                                                                                                                                                                                            for (auto& edge : adj[v]) {
                                                                                                                                                                                                                                                                                                            int u = edge.first;
                                                                                                                                                                                                                                                                                                                            int w = edge.second;

                                                                                                                                                                                                                                                                                                                                            if (dis[u] > dis[v] + w) {
                                                                                                                                                                                                                                                                                                                                                                dis[u] = dis[v] + w;

                                                                                                                                                                                                                                                                                                                                                                                    if (w == 0)
                                                                                                                                                                                                                                                                                                                                                                                                            q.push_front({u, dis[u]});
                                                                                                                                                                                                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                                                                                                                                                                                                                        q.push_back({u, dis[u]});
                                                                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    return -1;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        };
