#include <iostream>
#include <vector> // Added in necessary libraries
#include <queue>
#include <climits>  // For INT_MAX
using namespace std;



// Pair: {distance, vertex}
typedef pair<int, int> pii;

// Dijkstra's algorithm function
void dijkstra(int src, const vector<vector<pii>>& graph) {
    int n = graph.size();
    vector<int> dist(n, INT_MAX);  // Distance from src to each node
    dist[src] = 0;

    // Min-heap priority queue: smallest distance on top
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, src});  // {distance, vertex}

    while (!pq.empty()) {
        int u = pq.top().second;  // Current node
        int d = pq.top().first;   // Current distance
        pq.pop();

        // Skip if we have already found a better path
        if (d > dist[u]) continue;

        // Explore all neighbors
        for (auto edge : graph[u]) {
            int v = edge.first;   // Neighbor node
            int weight = edge.second; // Edge weight

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});  // Update priority queue
            }
        }
    }

    // Print shortest distances
    cout << "Shortest distances from node " << src << ":\n";
    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX)
            cout << i << ": INF\n";
        else
            cout << i << ": " << dist[i] << "\n";
    }
}

int main() {
    // Example graph: 5 nodes (0 to 4)
    // Each pair: {neighbor, weight}
    vector<vector<pii>> graph(5);

    graph[0].push_back({1, 10});
    graph[0].push_back({3, 5});
    graph[1].push_back({2, 1});
    graph[1].push_back({3, 2});
    graph[2].push_back({4, 4});
    graph[3].push_back({1, 3});
    graph[3].push_back({2, 9});
    graph[3].push_back({4, 2});
    graph[4].push_back({0, 7});
    

      

    
}