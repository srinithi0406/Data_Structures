//Menu driven program to perform the operations of Circular Queue ADT - Array 
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

class queue{
    private:
    int arr[SIZE];
    int front, rear;

    public:
    queue(){
        arr[SIZE]={0};
        front=rear=-1;
    }

    void enqueue(int val);
    int dequeue();
    int peek();
};

int main(){
    int ch, val, del, element;
    queue q1;
    while (1){
        printf("\nMenu\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter the element to be added: ");
            scanf(" %d", &val);
            q1.enqueue(val);
            break;

            case 2:
            del=q1.dequeue();
            if (del!=-1){
                printf("Deleted element is: %d\n", del);
            }
            break;

            case 3:
            element=q1.peek();
            if (element!=-1){
                printf("Peek element: %d\n", element);
            }
            break;

            case 4:
            return 0;

            default:
            printf("Invalid choice.\n");
        }
    }
}

//Adds an element to the end of the Circular Queue
void queue::enqueue(int val){
    if ((rear+1)%SIZE ==front){
        printf("Queue is full.\n");
        return;
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
    }
    else{
        rear=(rear+1)%SIZE;
    }
    arr[rear]=val;
}

//Dequeues and returns an element from the front of the Circular Queue
int queue::dequeue(){
    if (front==-1 && rear==-1){
        printf("Queue is empty.");
        return -1;
    }
    
    else if(front==rear){
        int del=arr[front];
        front=rear=-1;
        return del;
    }
    else{
        int del=arr[front];
        front=(front+1)%SIZE;
        return del;
    }
    
}

//Returns the element at the front of the Circular Queue
int queue::peek(){
    if(front==-1 && rear==-1){
        printf("Queue is empty.");
        return -1;
    }
    return arr[front];
}