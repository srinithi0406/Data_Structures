//Program to perform the operations of Priority Queue ADT - Max Heap 
#include <stdio.h>
#define MAX 100  

class PriorityQueue {
private:
    int heap[MAX];  
    int size;       

    void heapifyDown(int i); 
    void heapifyUp(int i);
    void heapSort();

public:
    PriorityQueue() {
        size = 0;
    }
    
    void insert(int value);
    void deleteMax();
    void display();
    void search(int value);
    void sortHeap();
};

int main() {
    PriorityQueue pq;
    int choice, value;

    while (1) {
        printf("Menu\n1.Insert\n2. Delete\n3. Display\n4. Search\n5. Sort (Heap Sort)\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                pq.insert(value);
                break;
            case 2:
                pq.deleteMax();
                break;
            case 3:
                pq.display();
                break;
            case 4:
                printf("Enter value to search: ");
                scanf("%d", &value);
                pq.search(value);
                break;
            case 5:
                pq.sortHeap();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}

// Heapify function to maintain Max heap property (downward)
void PriorityQueue :: heapifyDown(int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] > heap[largest])
        largest = left;

    if (right < size && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;
        heapifyDown(largest);
    }
}

// Heapify function to maintain Max heap property (upward)
void PriorityQueue :: heapifyUp(int i) {
    int parent = (i - 1) / 2;
    while (i > 0 && heap[i] > heap[parent]) {
        // Swap and move up
        int temp = heap[i];
        heap[i] = heap[parent];
        heap[parent] = temp;
        i = parent;
        parent = (i - 1) / 2;
    }
}

// Helper function to perform heap sort
void PriorityQueue :: heapSort() {
    int originalSize = size;
    for (int i = size - 1; i > 0; i--) {
        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
        size--;
        heapifyDown(0);
    }
    size = originalSize;
}

// Inserts an element into the priority queue
void PriorityQueue :: insert(int value) {
    if (size >= MAX) {
        printf("Heap Overflow!\n");
        return;
    }
    heap[size] = value;
    heapifyUp(size);
    size++;
}

// Deletes the maximum element (root of heap)
void PriorityQueue :: deleteMax() {
    if (size == 0) {
        printf("Heap Underflow! Priority Queue is empty.\n");
        return;
    }
    printf("Deleted: %d\n", heap[0]);
    heap[0] = heap[size - 1];
    size--;
    heapifyDown(0);
}

// Displays all the elements in the priority queue
void PriorityQueue :: display() {
    if (size == 0) {
        printf("Priority Queue is Empty!\n");
        return;
    }
    printf("Priority Queue (Max Heap): ");
    for (int i = 0; i < size; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

// Searches for an element in the priority queue
void PriorityQueue :: search(int value) {
    for (int i = 0; i < size; i++) {
        if (heap[i] == value) {
            printf("%d found in the Priority Queue.\n", value);
            return;
        }
    }
    printf("%d not found in the Priority Queue.\n", value);
}

// Sorts the priority queue using Heap Sort
void PriorityQueue :: sortHeap() {
    if (size == 0) {
        printf("Priority Queue is Empty!\n");
        return;
    }
    heapSort();
    printf("Sorted Priority Queue: ");
    for (int i = 0; i < size; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

