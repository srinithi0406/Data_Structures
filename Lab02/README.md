# Lab 02 – Classes and Pointers Recap

## Question 1: Number Classification using DMA

**Task**  
Write a C++ menu-driven program to determine whether a number is a  Palindrome, Armstrong, or Perfect Number. Normal variable and array declarations are not allowed. Utilize dynamic memory allocation (DMA). Design proper functions, maintain boundary conditions, and follow coding best practices. The menu is as follows,
- Palindrome
- Armstrong Number
- Perfect Number
- Exit

### Approach
- Memory is allocated using `malloc()` for all variables including `int` and temporary values.
- Based on user input, the program calls one of three functions:
  - **Palindrome**: Reverses the number and compares with the original.
  - **Armstrong**: Sums the digits raised to the power of number of digits.
  - **Perfect**: Sums all proper divisors and checks if it equals the original number.

### Sample Output
```
Memory allocated
Menu
1.Palindrome
2.Armstrong Number
3.Perfect number
4.Exit
Enter your choice: 1
Enter a number: 121
Palindrome

Enter your choice: 2
Enter a number: 153
Armstrong number

Enter your choice: 3
Enter a number: 28
Perfect number

Enter your choice: 4
```

---

## Question 2: Area Calculation using Classes

**Task**  
Write a C++ menu-driven program that calculates and displays the area of a square, cube, rectangle, and cuboid. Consider length as the side value for the square and cuboid. Identify proper data members and member functions. Design and create an appropriate class for the given scenario.  Maintain proper boundary conditions and follow coding best practices. The menus are as follows,
- Square
- Cube
- Rectangle
- Cuboid
- Exit

### Approach
- A class `Shapes` is defined with private members: `length`, `breadth`, `height`.
- Setters are used to assign values, and member functions calculate areas:
  - `calculateSquare()` – returns area of a square.
  - `calculateCube()` – returns surface area of a cube.
  - `calculateRectangle()` – returns area.
  - `calculateCuboid()` – returns surface area using 2(lb + bh + hl).

### Sample Output
```
Menu
1.Square
2.Cube
3.Rectangle
4.Cuboid
5.Exit
Enter your choice: 1
Enter the side of the square: 4
Area of square: 16.00

Enter your choice: 2
Enter the side of the cube: 3
Surface Area of cube: 54.00

Enter your choice: 3
Enter the length of the rectangle: 4
Enter the breadth of the rectangle: 5
Area of rectangle: 20.00

Enter your choice: 4
Enter the length of the cuboid: 3
Enter the breadth of the cuboid: 4
Enter the height of the cuboid: 5
Surface Area of cuboid: 94.00
```

---

## Files Submitted

- `2_A.cpp` – Number classification using dynamic memory allocation
- `2_B.cpp` – Avsrea calculation using classes

---

## Compilation Instructions

1. Open your terminal and navigate to the folder where the `.cpp` files are stored.
2. Compile and run the programs using:
```
g++ -o objectfilename filename.cpp
./objectfilename
```
