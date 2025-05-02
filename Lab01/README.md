# Lab 01 - Sorting and Searching Using Functions and Header Files

## Question 1: Sorting Program

**Task**:  
Write a menu-driven C++ program to sort a given array in ascending order using:
- Bubble Sort
- Selection Sort
- Insertion Sort
- Exit

### Approach:
- The user chooses one of the sorting options.
- The corresponding sort function is called:
  - **Bubble Sort**: Repeatedly swaps adjacent elements if they are in the wrong order.
  - **Selection Sort**: Selects the smallest element and places it at the beginning.
  - **Insertion Sort**: Inserts each element in its correct position in a sorted portion of the array.

### Sample Output:
Menu
1.Selection Sort
2.Bubble Sort
3.Insertion Sort
4.Exit
Enter your choice: 2
Enter the number of elements in array: 5
10 5 3 8 1
1 3 5 8 10


---

## Question 2: Search Program Using Header File

**Task**:  
Convert the sorting program into a header file and include it in a new C++ file.  
Write a menu-driven C++ program for:
- Linear Search
- Binary Search (after sorting)
- Exit

### Approach:
- The sorting logic is moved into a separate header file (`header.h`) and included in the search file.
- **Linear Search**: Checks each element one by one.
- **Binary Search**: Sorts the array using bubble sort, then applies binary search using the divide-and-conquer method.

### Sample Output:
Enter the number of elements in array: 5
10 5 3 8 1
Enter the element to be searched: 8
Menu
1.Linear search
2.Binary search
3.Exit
Enter your choice: 1
The element is found at: 3


---

## Files Submitted

- `1_A.cpp` – Sorting using menu
- `1_B.cpp` – Search program using header file
- `1_B_header.h` – Header file with sorting functions
