# Lab 12 – Graph ADT Implementations

## Question A: Graph ADT with Adjacency Matrix

**Task**  
Implement Graph ADT using adjacency matrix with these operations:  
1. Insert Edge  
2. Delete Edge  
3. Search Edge  
4. Display Graph  
5. Exit  

**Approach**  
- Uses 2D array to represent edges between vertices  
- Handles undirected graph implementation  
- Validates vertex indices before operations  


### Sample Output  
```
Graph ADT Menu
1.Insert
2.Delete
3.Search
4.Display
5.Exit
Enter choice: 1
Enter source and destination: 0 1
Edge inserted between 0 and 1

Enter choice: 4
Adjacency Matrix:
0 1 0 
1 0 0 
0 0 0
```

---

## Question B: Graph ADT with Adjacency List  

**Task**  
Implement Graph ADT using adjacency list with:  
1. Insert Edge  
2. Delete Edge  
3. Search Edge  
4. Display Graph  
5. Exit  

**Approach**  
- Uses array of linked lists to store edges  
- Efficient for sparse graphs  
- Handles edge removal from both vertices  

### Sample Output  
```
Graph ADT Menu
1.Insert
2.Delete
3.Search
4.Display
5.Exit
Enter choice: 1
Enter source and destination: 0 2
Edge inserted between 0 and 2

Enter choice: 4
Adjacency List:
0 -> 2 -> 1 -> NULL
1 -> 0 -> NULL
2 -> 0 -> NULL
```

---

## Question C: Graph ADT with Algorithms  

**Task**  
Implement Graph ADT with:  
1. Prim's MST Algorithm  
2. Kruskal's MST Algorithm  
3. Dijkstra's Shortest Path  
4. Insert Edge  
5. Display  
6. Exit  

**Approach**  
- Uses adjacency matrix for weighted edges  
- Implements all three algorithms from scratch  
- Handles disconnected graph cases  

**Algorithms**:  
- Prim's: Greedy MST with O(V²) complexity  
- Kruskal's: Union-Find MST with O(E log E)  
- Dijkstra's: Shortest Path with O(V²)  

### Sample Output  
```
Graph ADT Menu
1.Insert
2.Display
3.Prim's
4.Kruskal's
5.Dijkstra's
6.Exit
Enter choice: 3
Prim's MST:
Edge    Weight
0 - 1   2
1 - 2   3
Total weight: 5

Enter choice: 5
Enter source: 0
Dijkstra's paths from 0:
Vertex  Distance
0       0
1       2
2       5
```

---

## Files Submitted  
- `12_A.cpp` - Adjacency Matrix  
- `12_B.cpp` - Adjacency List  
- `12_C.cpp` - Graph Algorithms  

## Compilation  

```
g++ -o objfilename filename.cpp  
./objfilename
```
