# Lab 08 – Tree ADT - Binary Tree

## Question A: Tower Blocks Optimization using STL

**Task**  
Utilize C++ STL to solve the tower blocks problem where we need to maximize the number of blocks on Tower 1 by transferring blocks from other towers following specific rules.

**Approach**  
- Uses `sort()` from `<algorithm>` to arrange towers (excluding Tower 1) in ascending order.
- For each tower, if it has more blocks than Tower 1, transfers half the difference (rounded up) to Tower 1.
- Boundary conditions ensure no negative blocks and optimal transfers.

**Time Complexity**:  
- **Sorting**: O(n log n)  
- **Transfer Calculation**: O(n)  

### Sample Output  

```
Enter the number of test cases: 1

Enter the number of towers: 3
Enter the number of blocks in each tower: 5 8 6
Maximum number of blocks on Tower 1 is: 7
```

---

## Question B: Tree ADT using Character Binary Tree  

**Task**  
Write a C++ menu-driven program to implement Tree ADT using a character binary tree with the following operations:  

1. Insert  
2. Preorder Traversal  
3. Inorder Traversal  
4. Postorder Traversal  
5. Search  
6. Exit  

**Time Complexity of Operations**:  
- **Insert/Search**: O(n) [worst case]  
- **Traversals**: O(n)  

### Approach  
- Recursive insertion with user-specified left/right placement.  
- Standard DFS traversals (preorder, inorder, postorder).  
- Recursive search through all nodes.  

### Sample Output  

```
--- Menu ---  
1. Insert  
2. Preorder  
3. Inorder  
4. Postorder  
5. Search  
6. Exit  

Enter your choice: 1
Enter the value to be inserted: A
(A is now the root)

Enter your choice: 1
Enter the value to be inserted: B
Insert B to (L)eft or (R)ight of A? L

Enter your choice: 1
Enter the value to be inserted: C
Insert C to (L)eft or (R)ight of A? R

Enter your choice: 1
Enter the value to be inserted: D
Insert D to (L)eft or (R)ight of B? L

Enter your choice: 2
Preorder: A B D C

Enter your choice: 3
Inorder: D B A C

Enter your choice: 4
Postorder: D B C A

Enter your choice: 5
Enter the value to be searched for: C
Element C is found in the tree.

Enter your choice: 6
Exiting...
```

---

## Files Submitted  

- `8_A.cpp` – Tower blocks optimization using STL (Question A)  
- `8_B.cpp` – Character Binary Tree implementation (Question B)  

---

## Compilation Instructions  

1. Navigate to the directory containing the files.  
2. Compile and run each program using:  

```
g++ -o objfilename filename.cpp  
./objfilename  
```  
