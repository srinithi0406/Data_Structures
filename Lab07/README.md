# Lab 07 – Queue ADT - Array and List Implementation

## Question A: Queue ADT using Array

**Task**  
Write a C++ menu-driven program to implement Queue ADT using an integer array of size 5. The program should support the following operations:

1. Enqueue  
2. Dequeue  
3. Peek  
4. Exit  

**Time Complexity of Operations**:  
- **Enqueue**: O(1)  
- **Dequeue**: O(1)  
- **Peek**: O(1)  

### Approach  
- A fixed-size integer array (`SIZE=5`) implements the queue.  
- `front` and `rear` pointers track the queue boundaries.  
- Boundary conditions (full/empty queue) are handled explicitly.  

### Sample Output  

```
--- Menu ---  
1. Enqueue  
2. Dequeue  
3. Peek  
4. Exit  

Enter your choice: 1  
Enter the element to be added: 10  
Enqueued successfully.  

Enter your choice: 3  
Peek element: 10  

Enter your choice: 2  
Deleted element is: 10  

Enter your choice: 4  
Exiting...  
```

---

## Question B: Circular Queue ADT using Array  

**Task**  
Write a C++ menu-driven program to implement Circular Queue ADT using an integer array of size 5. The program should support:  

1. Enqueue  
2. Dequeue  
3. Peek  
4. Exit  

**Time Complexity of Operations**:  
- **Enqueue**: O(1)  
- **Dequeue**: O(1)  
- **Peek**: O(1)  

### Approach  
- Circular indexing (`(rear+1)%SIZE`) prevents wasted space.  
- Handles wrap-around for enqueue/dequeue operations.  
- Maintains O(1) time complexity for all operations.  

### Sample Output  

```
--- Menu ---  
1. Enqueue  
2. Dequeue  
3. Peek  
4. Exit  

Enter your choice: 1  
Enter the element to be added: 20  
Enqueued successfully.  

Enter your choice: 3  
Peek element: 20  

Enter your choice: 2  
Deleted element is: 20  

Enter your choice: 4  
Exiting...  
```

---

## Question C: Queue ADT using Linked List  

**Task**  
Write a C++ menu-driven program to implement Queue ADT using a singly linked list. The program should support:  

1. Enqueue  
2. Dequeue  
3. Peek  
4. Exit  

**Time Complexity of Operations**:  
- **Enqueue**: O(1)  
- **Dequeue**: O(1)  
- **Peek**: O(1)  

### Approach  
- Uses dynamic memory allocation for nodes.  
- `front` and `rear` pointers manage FIFO operations.  
- No fixed capacity (unlike array-based implementations).  

### Sample Output  

```
--- Menu ---  
1. Enqueue  
2. Dequeue  
3. Peek  
4. Exit  

Enter your choice: 1  
Enter the element to be added: 30  
Enqueued successfully.  

Enter your choice: 3  
Peek element: 30  

Enter your choice: 2  
Deleted element is: 30  

Enter your choice: 4  
Exiting...  
```

---

## Question D: String Processing with '+' Symbol  

**Task**  
Take a string from the user that consists of the '+' symbol. Process the string such that the final string does not include the '+' symbol and the immediate left non-'+' symbol. Select and choose the optimal ADT. Implement the program by including the appropriate header file.  

**Optimal ADT**: Stack (LIFO for tracking characters).  

### Approach  
- Stack stores characters until a '+' is encountered.  
- On '+', pop the last non-'+' character.  
- Final stack contents form the output string (reversed).  

### Sample Output  

```
Enter a string with + symbols: 45fgd+++ab+c  
Processing...  
Processed string: 45ac  
```

---

## Files Submitted  

- `7_A.cpp` – Queue ADT using array (Question A)  
- `7_B.cpp` – Circular Queue ADT using array (Question B)  
- `7_C.cpp` – Queue ADT using linked list (Question C)  
- `7_D.cpp` – String processing with '+' (Question D)  
- `7_D_header.h` – Header file for Question D  

---

## Compilation Instructions  

1. Navigate to the directory containing the files.  
2. Compile and run each program using:  

```bash
g++ -o obj_filename filename.cpp  
./obj_filename  
```  
