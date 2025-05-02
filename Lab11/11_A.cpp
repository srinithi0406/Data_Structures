// Menu driven program to perform the operations of Hash ADT-Linear probing
#include <stdio.h>
#include <stdlib.h>
# define SIZE 5

class HashTable{
    private:
    struct HashNode {
        int key;
        bool isOccupied;
        bool isDeleted;
    };
    
    HashNode table[SIZE];

    int hashFunction(int key) {
        return key % SIZE;
    }

    public:
    HashTable() {
        for (int i = 0; i < SIZE; i++) {
            table[i].isOccupied = false;
            table[i].isDeleted = false;
        }
    }

    void insert(int key);
    int remove(int key);
    int search(int key);
    void display();
};

int main(){
    int ch, key, idx, del;
    HashTable h1;
    while (1){
        printf("\nMenu\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter the element to be added: ");
            scanf(" %d", &key);
            h1.insert(key);
            break;

            case 2:
            printf("Enter the key to be deleted: ");
            scanf("%d", &key);
            del=h1.remove(key);
            if (del!=-1){
            printf("%d is deleted from the Hash table.", del);
            }
            break;

            case 3:
            printf("Enter the key to search for: ");
            scanf("%d", &key);
            idx=h1.search(key);
            if (idx!=-1){
                printf("Key found at index: %d ", idx);
            }
            break;

            case 4:
            h1.display();
            break;

            case 5:
            return 0;

            default:
            printf("Invalid choice.\n");
        }
    }
}

// Inserts a key to the Hash table using linear probing 
void HashTable::insert(int key){
    int index = hashFunction(key);
    int originalIndex = index;
    int i = 0;

    while (table[index].isOccupied && !table[index].isDeleted) {
        index = (originalIndex + ++i) % SIZE;
        if (index == originalIndex) {
            printf("Hash table is full");
            return;
        }
    }
    table[index].key = key;
    table[index].isOccupied = true;
    table[index].isDeleted = false;

}

// Removes and returns a key from the Hash table
int HashTable::remove(int key) {
    int index = search(key);
    if (index != -1) {
        table[index].isDeleted = true;
        return key;
    }
    return -1;
}

// Returns the index of the key in the Hash table 
int HashTable::search(int key) {
    int index = hashFunction(key);
    int originalIndex = index;
    int i = 0;

    while (table[index].isOccupied) {
        if (table[index].key == key && !table[index].isDeleted) {
            return index;
        }
        index = (originalIndex + ++i) % SIZE;
        if (index == originalIndex) break;
    }
    printf("Key not found");
    return -1;
}

// Displays all the keys of the Hash table
void HashTable::display() {
    for (int i = 0; i < SIZE; i++) {
        if (table[i].isOccupied && !table[i].isDeleted) {
            printf("Index %d: %d\n", i, table[i].key);
        } 
        else {
            printf("Index %d: Empty\n", i);
        }
    }
}
