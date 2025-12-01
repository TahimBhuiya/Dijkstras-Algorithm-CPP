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
    


}