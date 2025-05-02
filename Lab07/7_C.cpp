//Menu driven program to perform the operations of Queue ADT - Singly Linked List 
#include <stdio.h>
#include <stdlib.h>

class queue{
    private:
    struct node{
        int data;
        struct node* next;
    }*front, *rear;

    public:
    queue(){
        front=rear=NULL;
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

//Adds an element to the end of the Queue
void queue::enqueue(int val){
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;

    if (front==NULL  && rear==NULL){
        front=rear=newnode;
        return;
    }
    else {
        rear->next=newnode;
        rear=newnode;
        return;
    }
}

//Dequeues and returns an element from the front of the Queue
int queue::dequeue(){
    if (front==NULL  && rear==NULL){
        printf("Queue is empty.");
        return -1;
    }
    else if (front==rear){
        int del=front->data;
        front=rear=NULL;
        return del;
    }
    else{
        int del=front->data;
        struct node*temp=front;
        front=temp->next;
        free(temp);
        return del;
    }
}

//Returns the element at the front of the Queue
int queue::peek(){
    if (front==NULL  && rear==NULL){
        printf("Queue is empty.");
        return -1;
    }
    return front->data;
}
