
# Lab 05 – List ADT and Round-Robin Scheduling

## Question A: List ADT using Doubly Linked List with Tail

**Task**  
Write a C++ menu-driven program to implement List ADT using a doubly linked list with a tail. The program should support the following operations:

1. Insert at Beginning  
2. Insert at End  
3. Insert at a Specific Position  
4. Delete from Beginning  
5. Delete from End  
6. Delete from a Specific Position  
7. Search  
8. Display  
9. Exit  

**Time Complexity of Operations**:  
- **Insert at Beginning/End**: O(1)  
- **Insert at Position**: O(n)  
- **Delete from Beginning/End**: O(1)  
- **Delete from Position**: O(n)  
- **Search**: O(n)  
- **Display**: O(n)  

### Approach  
- A class-based implementation is used to define the doubly linked list with `head` and `tail` pointers.  
- Operations like insert, delete, and search are implemented as member functions.  
- The display function prints the list in both forward and reverse directions to demonstrate the doubly linked nature.  

### Sample Output  

```
--- Menu ---  
1. Insert at Beginning  
2. Insert at End  
3. Insert at Position  
4. Delete from Beginning  
5. Delete from End  
6. Delete from Position  
7. Search  
8. Display  
9. Exit  

Enter your choice: 1  
Enter value: 10  
Inserted at beginning.  

Enter your choice: 2  
Enter value: 20  
Inserted at end.  

Enter your choice: 8  
List: 10 20  
Reverse print: 20 10  

Enter your choice: 9  
Exiting...  
```

---

## Question B: List ADT using Circular Linked List  

**Task**  
Write a C++ menu-driven program to implement List ADT using a circular linked list. The program should support the following operations:  

1. Insert at Beginning  
2. Insert at End  
3. Insert at a Specific Position  
4. Delete from Beginning  
5. Delete from End  
6. Delete from a Specific Position  
7. Search  
8. Display  
9. Exit  

**Time Complexity of Operations**:  
- **Insert at Beginning/End**: O(n) (due to traversal to update the last node's `next` pointer)  
- **Insert at Position**: O(n)  
- **Delete from Beginning/End**: O(n)  
- **Delete from Position**: O(n)  
- **Search**: O(n)  
- **Display**: O(n)  

### Approach  
- A class-based implementation is used to define the circular linked list with a `head` pointer.  
- Operations like insert, delete, and search are implemented as member functions.  
- The display function traverses the list until it returns to the `head` node.  

### Sample Output  

```
--- Menu ---
1. Insert at Beginning  
2. Insert at End  
3. Insert at Position  
4. Delete from Beginning  
5. Delete from End  
6. Delete from Position  
7. Search  
8. Display  
9. Exit  

Enter your choice: 1  
Enter value: 10  
Inserted at beginning.  

Enter your choice: 2  
Enter value: 20  
Inserted at end.  

Enter your choice: 8  
List: 10 20  

Enter your choice: 9  
Exiting...  
```

---

## Question C: Round-Robin Scheduling using Circular Linked List  

**Task**  
Implement the round-robin scheduling algorithm using a circular linked list. The program should support the following operations:  

1. Insert Process  
2. Execute  
3. Exit  

The "Insert Process" operation adds a process with a given execution time to the queue. The "Execute" operation processes the queue by allocating a fixed time slot to each process. If a process completes, it is removed; otherwise, the remaining time is reinserted at the end of the queue.  

### Approach  
- A circular linked list is used to represent the queue of processes.  
- The `execute` function processes each node in the queue, subtracts the fixed time slot, and reinserts the process if it hasn't completed.  
- The program continues until all processes are completed.  

### Sample Output  

```
Enter the fixed time slot: 2  

Menu  
1. Insert Process  
2. Execute  
3. Exit  

Enter your choice: 1  
Enter a process execution time: 5  

Enter your choice: 1  
Enter a process execution time: 3  

Enter your choice: 2  
Processing with time: 5  
Remaining time for this process: 3  
Updated list: 3 3  

Processing with time: 3  
Remaining time for this process: 1  
Updated list: 1 3  

Processing with time: 1  
Process is completed.  
Updated list: 3  

Processing with time: 3  
Remaining time for this process: 1  
Updated list: 1  

Processing with time: 1  
Process is completed.  
Updated list:  

Enter your choice: 3  
Exiting...  
```

---

## Files Submitted  

- `5_A.cpp` – Doubly linked list implementation with tail (Question A)  
- `5_B.cpp` – Circular linked list implementation (Question B)  
- `5_C.cpp` – Round-robin scheduling implementation (Question C)  
- `5_C_header.h` – Header file for round-robin scheduling (Question C)  

---

## Compilation Instructions  

1. Open your terminal and navigate to the folder where the .cpp files are stored.  
2. Compile and run the programs using:  

```
g++ -o objfilename filename.cpp  
./objfilename  
```  

