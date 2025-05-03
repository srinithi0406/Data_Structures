# Lab 09 – Tree ADT – Binary Search Tree

## Question A: Nene's Game Winners (STL)

**Task**  
Utilize C++ STL to determine the number of winners in Nene's game where players are removed in groups.

**Approach**  
- Uses `sort()` from `<algorithm>` to arrange player positions
- Compares group sizes with removal positions to determine winners
- Handles boundary conditions for empty groups

**Time Complexity**:  
- **Sorting**: O(k log k)  
- **Group Processing**: O(q)  

### Sample Output  

```
Enter the number of test cases: 1

Enter the number of players to be removed and the number of groups: 3 2
Enter the positions of the players to be removed: 5 2 8
Enter the number of players in each group: 4 6
Number of winners in each group: 1 4
```

---

## Question B: Player Strength Differences (STL)  

**Task**  
Calculate advantage (strength differences) for each participant using C++ STL.

**Approach**  
- Finds two strongest players using linear scan
- Computes differences relative to strongest opponent
- Efficiently handles edge cases (empty input, single player)

**Time Complexity**:  
- **Max Finding**: O(n)  
- **Difference Calculation**: O(n)  

### Sample Output  

```
Enter the number of test cases: 1

Enter the number of players: 4
Enter the strength of each player: 12 8 15 10
Strength differences: -3 -7 0 -5
```

---

## Question C: Binary Search Tree ADT  

**Task**  
Implement Tree ADT using a binary search tree with these operations:  

1. Insert  
2. Preorder Traversal  
3. Inorder Traversal  
4. Postorder Traversal  
5. Search  
6. Exit  

**Time Complexity**:  
- **Insert/Search**: O(h) [h = tree height]  
- **Traversals**: O(n)  

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
Enter the element to be added: 50  

Enter your choice: 1  
Enter the element to be added: 30  

Enter your choice: 1  
Enter the element to be added: 70  

Enter your choice: 3  
Inorder: 30 50 70  

Enter your choice: 5  
Enter the element to search: 30  
Element found in the tree.  

Enter your choice: 6  
Exiting...
```

---

## Question D: Expression Tree Construction  

**Task**  
Extend BST to construct expression trees from postfix notation with:  

1. Postfix Expression Input  
2. Tree Construction  
3. Preorder Traversal  
4. Inorder Traversal  
5. Postorder Traversal  
6. Exit  

**Time Complexity**:  
- **Construction**: O(n)  
- **Traversals**: O(n)  

### Sample Output  

```
Expression Tree Menu  
1. Postfix Expression  
2. Construct Expression Tree  
3. Preorder  
4. Inorder  
5. Postorder  
6. Exit  

Enter your choice: 1  
Enter a valid postfix expression: ab+c*  

Enter your choice: 2  
Expression Tree Constructed!  

Enter your choice: 4  
Inorder Traversal: a + b * c  

Enter your choice: 6  
Exiting program.
```

---

## Files Submitted  

- `9_A.cpp` – Nene's game solution (Question A)  
- `9_B.cpp` – Player strength differences (Question B)  
- `9_C.cpp` – BST implementation (Question C)  
- `9_D.cpp` – Expression tree implementation (Question D)  

---

## Compilation Instructions  

```
g++ -o objfilename filename.cpp  
./objfilename
```

