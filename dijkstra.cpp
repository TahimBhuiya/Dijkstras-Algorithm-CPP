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

        
        }