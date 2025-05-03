# Lab 11 – Hash ADT - Hash Table

## Question A: Hash ADT with Linear Probing

**Task**  
Implement Hash ADT using linear probing with these operations:  
1. Insert  
2. Delete  
3. Search  
4. Display  
5. Exit  

**Approach**  
- Uses array with flags for occupied/deleted slots  
- Handles collisions via linear probing (i+1, i+2,...)  
- Implements lazy deletion with isDeleted flag  

**Time Complexity**:  
- Insert/Search/Delete: O(n) worst case

### Sample Output  
```
Menu
1.Insert
2.Delete
3.Search
4.Display
5.Exit
Enter choice: 1
Enter key to insert: 25
Inserted at index 0

Enter choice: 3 
Enter key to search: 25
Key found at index 0
```

---

## Question B: Hash ADT with Quadratic Probing  

**Task**  
Implement Hash ADT using quadratic probing with:  
1. Insert  
2. Delete  
3. Search  
4. Display  
5. Exit  

**Approach**  
- Uses quadratic probing (i+1², i+2²,...) for collision resolution  
- Maintains occupied/deleted status flags  
- Handles table full condition  

**Time Complexity**:  
- Insert/Search/Delete: O(n) worst case

### Sample Output  
```
Menu
1.Insert
2.Delete
3.Search
4.Display
5.Exit
Enter choice: 1
Enter key: 38 
Inserted 38 at index 3

Enter choice: 4
Index 3: 38
Index 4: Empty
```

---

## Question C: Hash ADT with Separate Chaining  

**Task**  
Implement Hash ADT using separate chaining with:  
1. Insert  
2. Delete  
3. Search  
4. Display  
5. Exit  

**Approach**  
- Uses array of linked lists  
- Chains colliding elements via linked nodes  
- Simple direct deletion from linked lists  

**Time Complexity**:  
- Insert/Delete/Search: O(n) worst case

### Sample Output  
```
Menu
1.Insert 2.Delete 3.Search 4.Display 5.Exit
Enter choice: 1
Enter key: 42
Inserted 42

Enter choice: 4
Index 2: 42 -> NULL
Index 3: NULL
```

---

## Files Submitted  
- `11_A.cpp` - Linear Probing  
- `11_B.cpp` - Quadratic Probing  
- `11_C.cpp` - Separate Chaining  

## Compilation  
```
g++ -o objfilename filename.cpp  
./objfilename
```
