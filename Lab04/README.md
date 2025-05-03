# Lab 04 – List ADT - Singly Linked List

## Question A: List ADT using Singly Linked List

**Task**  
Write a C++ menu-driven program to implement List ADT using a singly linked list. The program should support the following operations:

1. Insert at Beginning  
2. Insert at End  
3. Insert at a Specific Position  
4. Delete from Beginning  
5. Delete from End  
6. Delete from a Specific Position  
7. Search  
8. Display  
9. Display Reverse  
10. Reverse Link  
11. Exit  

**Clarifications**:
- **Option 9** prints the list contents in reverse order using recursion but does **not** modify the list structure.  
- **Option 10** reverses the actual link connections of the list.

### Approach
- A class-based implementation is used to define the singly linked list.
- Operations like insert, delete, and search are implemented as member functions.
- Display reverse uses **recursion** without altering the list.
- Reverse Link adjusts the `next` pointers to reverse the list in-place.

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
9. Display Reverse
10. Reverse Link
11. Exit

Enter your choice: 1
Enter value: 10
Inserted at beginning.

Enter your choice: 2
Enter value: 20
Inserted at end.

Enter your choice: 8
List: 10 20

Enter your choice: 9
Reverse Display: 20 10

Enter your choice: 10
List reversed.

Enter your choice: 8
List: 20 10
```

---

## Question B: Ascending Insertion and Merging using Header File

**Task**  
Write a C++ program using a **header file** to implement List ADT using a singly linked list. The list must always remain in **ascending order**. Perform the following operations:

1. Insert Ascending  
2. Merge Two Lists  
3. Display  
4. Exit  

Then write a second C++ program that includes the header and manages **three lists**, providing these menu operations:

1. Insert into List1  
2. Insert into List2  
3. Merge into List3 (in ascending order)  
4. Display  
5. Exit  

### Approach
- The singly linked list class is written in a **header file (`4_B_header.h`)**.
- Ascending insert ensures sorted order using conditional traversal.
- Merging of two lists is implemented as a new function that creates a third sorted list from List1 and List2.
- A clean modular design is followed for code reuse and maintenance.

### Sample Output

```
--- Menu ---
1. Insert into List1
2. Insert into List2
3. Merge into List3
4. Display Lists
5. Exit

Enter your choice: 1
Enter value: 30
Enter value: 10
Enter value: 20
List1: 10 20 30

Enter your choice: 2
Enter value: 25
Enter value: 5
List2: 5 25

Enter your choice: 3
Lists merged into List3

Enter your choice: 4
List1: 10 20 30
List2: 5 25
List3: 5 10 20 25 30
```

---

## Files Submitted

- `4_A.cpp` – Singly linked list implementation with full ADT operations (Question A)
- `4_B_header.h` – Header file with List class implementation (Question B)
- `4_B.cpp` – Program managing 3 lists and performing merge using the header file (Question B)

---

## Compilation Instructions

1. Open your terminal and navigate to the folder where the .cpp files are stored.
2. Compile and run the programs using:
   
```
g++ -o objectfilename filename.cpp
./objectfilename
```
