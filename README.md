# Dijkstra's Algorithm in C++

## 📌 Overview

This C++ program demonstrates **Dijkstra's Algorithm**, a fundamental method for finding the **shortest path** from a single source node to all other nodes in a weighted graph.

Steps Dijkstra follows:

1. Starts from a chosen source node.
2. Uses a **priority queue** to select the closest unvisited node.
3. Updates distances to all neighbors if a shorter path is found.
4. Repeats until all nodes are visited.

It prints the shortest distances from the source node to every other node in the graph.

---

## 🔧 Features

- **Priority Queue-Based Traversal** for efficiency
- **Weighted Graph Support**
- **Single-Source Shortest Paths**
- **Adjacency List Representation**
- **Fully Commented Code** for learning and modification

---

## 📋 Example Run

**Graph Structure (node: {neighbor, weight}):**

```
0: {1,10}, {3,5}
1: {2,1}, {3,2}
2: {4,4}
3: {1,3}, {2,9}, {4,2}

```
