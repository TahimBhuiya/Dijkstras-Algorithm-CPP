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
4: {0,7}, {2,6}
```

**Output (shortest distances from node 0):**

```
0: 0
1: 8
2: 9
3: 5
4: 7
```

---

## ⚙ How It Works

1. **Initialize Distances**

   - Set all distances to infinity except the source (0).
   - Push the source into a priority queue.

2. **Process Nodes Using Min-Heap**

   - Extract node with smallest distance.
   - Update distances for all its neighbors if a shorter path exists.
   - Push updated neighbors back into the priority queue.

3. **Repeat Until Queue is Empty**

   - All reachable nodes have their shortest distance computed.

4. **Print Results**
   - Display shortest distance from source to each node.

---

## 🛠 How to Run

### 1️⃣ Using a local C++ compiler

Save the code as `dijkstra.cpp` and then compile/run:

```bash
g++ dijkstra.cpp -o dijkstra
./dijkstra
```

### 2️⃣ Using an online C++ compiler

You can paste and run the code using:

- Programiz
- Replit
- GeeksforGeeks IDE
