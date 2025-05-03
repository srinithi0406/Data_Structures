# Lab 10 – Priority Queue ADT – Heap

## Question A: Prefix Removal for Unique Sequence

**Task**  
Write a C++ program to find the minimum number of prefixes to remove from a sequence to make all remaining elements unique.

**Approach**  
- Scans the sequence from end to beginning
- Checks for duplicate elements
- Returns the earliest position where duplicates end
- Uses nested loops for comparison (O(n²) time complexity)

### Sample Output  

```
Enter the number of test cases: 1

Enter the length of the sequence: 5
Enter the elements of the sequence: 1 2 3 2 4
Number of prefixes to be removed: 3
```

---

## Question B: Word Game Scoring  

**Task**  
Calculate scores for three players in a word game where:
- Unique words score 3 points
- Words shared with one other player score 1 point
- Words shared with both players score 0 points

**Approach**  
- Uses 3D array to store words from each player
- Compares all words across players
- Implements scoring logic with nested loops
- Handles fixed word size (4 characters)

**Time Complexity**:  
- **Word Comparison**: O(n²) per player  

### Sample Output  

```
Enter the number of test cases: 1

Enter the number of words entered by each player: 2
Enter the words written by each player: 
cat dog bat cat
dog bat mat rat
bat mat cat sat
Scores of each player: 4 3 2
```

---

## Question C: Priority Queue ADT using Max Heap  

**Task**  
Implement Priority Queue ADT with these operations:  

1. Insert  
2. Delete (Max Element)  
3. Display  
4. Search  
5. Sort (Heap Sort)  
6. Exit

**Approach**  
- Uses array-based max-heap implementation  
- Maintains heap property with `heapifyUp` (insert) and `heapifyDown` (delete)  
- Implements heap sort by repeatedly extracting max element  
- Handles boundary conditions (overflow/underflow)  
- Provides O(log n) for insert/delete and O(n log n) for sorting  

**Time Complexity**:  
- Insert/Delete: O(log n)  
- Search: O(n)  
- Heap Sort: O(n log n)  

### Sample Output  

```
Menu
1. Insert
2. Delete
3. Display
4. Search
5. Sort (Heap Sort)
6. Exit

Enter your choice: 1
Enter value to insert: 30

Enter your choice: 1
Enter value to insert: 50

Enter your choice: 3
Priority Queue (Max Heap): 50 30

Enter your choice: 5
Sorted Priority Queue: 30 50

Enter your choice: 6
Exiting...
```

---

## Files Submitted  

- `10_A.cpp` – Prefix removal solution  
- `10_B.cpp` – Word game scoring  
- `10_C.cpp` – Priority Queue - Max Heap implementation  

---

## Compilation Instructions  

```
g++ -o objfilename filename.cpp  
./objfilename
```


