# Lab 03 - List ADT - Array Implementation

## Task

Write a C++ menu-driven program to implement List ADT using an array of size 5. Maintain proper boundary conditions and follow good coding practices. The List ADT has the following operations:

1. Insert Beginning  
2. Insert End  
3. Insert Position  
4. Delete Beginning  
5. Delete End  
6. Delete Position  
7. Search  
8. Display  
9. Rotate  
10. Exit

The rotate option takes an input 'k' which rotates the entire array to the right by k times. Think of at least 3 solutions. Think of a solution that rotates using O(1) extra space.

**Example:**  
Input: nums = [1,2,3,4,5], k = 2  
Output: [4,5,1,2,3]  
Explanation:  
Rotate 1 step to the right → [5,1,2,3,4]  
Rotate 2 steps to the right → [4,5,1,2,3]

## Approach

* A class `List` is defined with a fixed-size array of 5 elements.
* Insertions and deletions are done at specified positions with proper index checks.
* Search operation traverses the array to locate the element.
* Display function shows the current state of the list.
* Rotate function performs k right-rotations using a one-step rotation method inside a loop, ensuring O(1) extra space is used.

## Sample Output

```
Menu

    Insert Beginning

    Insert End

    Insert Position

    Delete Beginning

    Delete End

    Delete Position

    Search

    Display

    Rotate

    Exit
    Enter your choice: 1
    Enter element: 10
    Element inserted at beginning.

Enter your choice: 2
Enter element: 5
Element inserted at end.

Enter your choice: 9
Enter k: 2
Array rotated 2 times.
```


## Files Submitted

* `list.cpp` — Implementation of List ADT using array.

## Compilation Instructions

* Open your terminal and navigate to the folder containing the file.
* Compile and run using:

```
g++ list.cpp -o list
./list
```
