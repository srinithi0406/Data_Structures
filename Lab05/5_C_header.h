//Header file for the program to implement Round-Robin scheduling algorithm using Circular Linked List
#include <stdio.h>
#include <cstdlib>

class list{
    private:
    struct node{
        int data;
        struct node* next;
    }*head;

    public:
    list(){
        head=NULL;
    }

    void insert(int ptime);
    int delbeg();
    void display();
    void execute(int tslot);
};

// Insertion of a process time to the circular linked list
void list::insert(int ptime){
    struct node* newnode= (node*)malloc(sizeof(struct node));
    newnode->data=ptime;
    if (head==NULL){
        head=newnode;
        newnode->next=head;
        return ;
    }
    struct node* temp=head;
    while (temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    return ;
}

//Deletion at the beginning of circular linked list
int list::delbeg(){
    if(head==NULL){
        printf("List is empty.");
        return -1;
    }
    if (head->next==head){
        int del=head->data;
        head=NULL;
        return del;
    }
    int del=head->data;
    struct node* temp=head;
    while (temp->next!=head){
        temp=temp->next;
    }
    head=head->next;
    temp->next=head;
    return del;
    
}

//Display all the process timings in the circular linked list
void list::display(){
    if (head==NULL){
        printf("List is empty");
        return;
    }

    struct node* temp=head;
    while (true){
        printf("%d ", temp->data);
        temp=temp->next;
        if (temp==head){
            break;
        }
    }
    printf("\n");
    
}

// Executes Round-Robin scheduling using circular linked list
void list::execute(int tslot){
    if (head==NULL){
        printf("List is empty");
        return;
    }

    struct node* temp=head;
    while (head!=NULL){
        int ptime=temp->data;
        printf("\nProcessing with time: %d\n", ptime);
        temp->data-=tslot;
        if (temp->data <=0){
            printf("Process is completed.\n");
            delbeg();
            temp=head;
        }
        else{
            int rem_time=temp->data;
            printf("Remaining time for this process: %d\n", rem_time);
            delbeg();
            insert(rem_time);
            temp=head;
        }

        printf("Updated list: ");
        display();
    }
}