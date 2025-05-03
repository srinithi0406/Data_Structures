# Lab 06 – Stack ADT – Array and Linked List

## Question A: Stack ADT using Character Array

**Task**  
Write a C++ menu-driven program to implement Stack ADT using a character array of size 5. The program should support the following operations:

1. Push  
2. Pop  
3. Peek  
4. Exit  

**Time Complexity of Operations**:  
- **Push**: O(1)  
- **Pop**: O(1)  
- **Peek**: O(1)  

### Approach  
- A fixed-size character array (`SIZE=5`) is used to implement the stack.  
- Boundary conditions like stack overflow (full) and underflow (empty) are handled.  
- The `top` pointer tracks the current position in the stack.  

### Sample Output  

```
--- Menu ---  
1. Push  
2. Pop  
3. Peek  
4. Exit  

Enter your choice: 1  
Enter the character to be pushed: A  
Pushed successfully.  

Enter your choice: 3  
Peek element: A  

Enter your choice: 2  
Popped element: A  

Enter your choice: 4  
Exiting...  
```

---

## Question B: Stack ADT using Singly Linked List  

**Task**  
Write a C++ menu-driven program to implement Stack ADT using a character singly linked list. The program should support the following operations:  

1. Push  
2. Pop  
3. Peek  
4. Exit  

**Time Complexity of Operations**:  
- **Push**: O(1)  
- **Pop**: O(1)  
- **Peek**: O(1)  

### Approach  
- A singly linked list with a `top` pointer is used to implement the stack dynamically.  
- Each node contains a character and a pointer to the next node.  
- Memory allocation/deallocation is handled using `malloc` and `free`.  

### Sample Output  

```
--- Menu ---  
1. Push  
2. Pop  
3. Peek  
4. Exit  

Enter your choice: 1  
Enter the character to be pushed: B  
Pushed successfully.  

Enter your choice: 3  
Peek element: B  

Enter your choice: 2  
Popped element: B  

Enter your choice: 4  
Exiting...  
```

---

## Question C: Infix to Postfix Conversion and Evaluation  

**Task**  
Write a C++ menu-driven program to:  
1. Convert infix expressions to postfix notation.  
2. Evaluate postfix expressions.  
The program should support the following operations:  

1. Get Infix  
2. Convert Infix  
3. Evaluate Postfix  
4. Exit  

Supported Operators:  
- Arithmetic: `+`, `-`, `*`, `/`, `%`  
- Assignment: `=`  

**Time Complexity of Operations**:  
- **Infix to Postfix Conversion**: O(n)  
- **Postfix Evaluation**: O(n)  

### Approach  
- A stack (implemented via singly linked list in `s_header.h`) is used for conversion and evaluation.  
- Precedence rules are enforced during conversion.  
- Postfix evaluation handles multi-digit numbers and spaces.  

### Sample Output  

```
--- Menu ---  
1. Get Infix  
2. Convert Infix  
3. Evaluate Postfix  
4. Exit  

Enter your choice: 1  
Enter an infix expression: 3+5*2  

Enter your choice: 2  
Postfix expression: 3 5 2 * +  

Enter your choice: 3  
Output of the expression: 13  

Enter your choice: 4  
Exiting...  
```

---

## Question D: Parenthesis Balancing Check  

**Task**  
Write a C++ menu-driven program to check if a string of parentheses (`(` and `)`) is balanced. The program should support:  

1. Check Balance  
2. Exit  

**Optimal ADT**: Stack (LIFO principle matches parenthesis nesting).  

### Approach  
- A stack is used to track opening parentheses.  
- For every `)`, check if there's a matching `(` at the stack top.  
- The string is balanced only if the stack is empty after processing.  

### Sample Output  

```
--- Menu ---  
1. Check Balance  
2. Exit  

Enter your choice: 1  
Enter a string with open and closed parenthesis: (()())  
Checking Balance...  
The string is balanced.  

Enter your choice: 2  
Exiting...  
```

---

## Files Submitted  

- `6_A.cpp` – Stack ADT using array (Question A)  
- `6_B.cpp` – Stack ADT using singly linked list (Question B)  
- `6_C.cpp` – Infix to postfix conversion and evaluation (Question C)  
- `6_C_header.h` – Header file for Question C  
- `6_D.cpp` – Parenthesis balancing check (Question D)  
- `6_D_header.h` – Header file for Question D  

---

## Compilation Instructions  

1. Navigate to the directory containing the files.  
2. Compile and run each program using:  

```
g++ -o objfilename filename.cpp  
./objfilename  
```  
