//Program to perform the operations of List-ADT - Doubly Linked List
#include <stdio.h>
#include <cstdlib>

class list{
    private:
    struct node{
        int data;
        struct node* next;
        struct node* prev;
    }*head, *tail;

    public:
    list(){
        head=NULL;
        tail=NULL;
    }

    int insertbeg(int);
    int insertend(int);
    int insertpos(int, int);
    int delbeg();
    int delend();
    int delpos(int);
    int search(int);
    void display();
};


int main(){
    int ch, num, idx, del;
    list l1;
    while (1){
        printf("\n\nMenu\n1.Insert Beginning\n2.Insert End\n3.Insert Position\n4.Delete Beginning\n5.Delete End\n6.Delete Position\n7.Search\n8.Display\n9.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter the element to be inserted: ");
            scanf("%d", &num);
            l1.insertbeg(num);
            break;

            case 2:
            printf("Enter the element to be inserted: ");
            scanf("%d", &num);
            l1.insertend(num);
            break;

            case 3:
            printf("Enter the element to be inserted: ");
            scanf("%d", &num);
            printf("Enter the index where the element has to be inserted: ");
            scanf("%d", &idx);
            l1.insertpos(num, idx);
            break;

            case 4:
            del=l1.delbeg();
            if (del!=-1){
                printf("Deleted element is: %d", del);
            }
            break;

            case 5:
            del=l1.delend();
            if (del!=-1){
                printf("Deleted element is: %d", del);
            }
            break;

            case 6:
            printf("Enter the index of the element to be deleted: ");
            scanf("%d", &idx);
            del=l1.delpos(idx);
            if (del!=-1){
                printf("Deleted element is: %d", del);
            }
            break;

            case 7:
            printf("Enter the element to be searched for: ");
            scanf("%d", &num);
            idx=l1.search(num);
            if (idx!=-1){
                printf("Element is found at index: %d", idx);
            }
            break;

            case 8:
            l1.display();
            break;

            case 9:
            return 0;

            default:
            printf("Invalid choice.");
        }
    }
}

// Insertion of an element at the beginning of the doubly linked list
int list::insertbeg(int num){
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->prev=NULL;
    if (head==NULL){
        head=tail=newnode;
        return 1;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    return 1;
}

//Insertion of an element to the end of the doubly linked list
int list::insertend(int num){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if (head==NULL){
        head=tail=newnode;
        return 1;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    return 1;
}

//Insertion at a given index in the doubly linked list
int list::insertpos(int num, int idx){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;

    if (idx==0){
        insertbeg(num);
        return 1;
    }

    struct node* temp=head;
    for (int i=0; i<idx-1 && temp!=NULL; i++){
        temp=temp->next;
    }
    if (temp==NULL){
        printf("Invalid index.");
        return -1;
    }

    newnode->prev=temp;
    newnode->next=temp->next;
    
    if (temp->next==NULL){
        tail=newnode;
    }
    else{
        temp->next->prev=newnode;
    }
    temp->next=newnode;
    return 1;
}

//Deletion of an element at the beginning of the doubly linked list
int list::delbeg(){
    if (head==NULL){
        printf("List is empty.");
        return -1;
    }
    if (head==tail){
        int del=head->data;
        head=tail=NULL;
        return del;
    }
    struct node* temp=head;
    int del=temp->data;
    head=temp->next;
    head->prev=NULL;
    free(temp);
    return del;
}

//Deletion at the end of the doubly linked list
int list::delend(){
    if (head==NULL){
        printf("List is empty.");
        return -1;
    }
    if (head==tail){
        int del=tail->data;
        head=tail=NULL;
        return del;
    }
    int del=tail->data;
    tail=tail->prev;
    tail->next=NULL;
    return del;
}

//Deletion at a given index in the doubly linked list
int list::delpos(int idx){
    if (head==NULL){
        printf("List is empty.");
        return -1;
    }

    if (idx==0){
        int del=delbeg();
        return del;
    }

    struct node* temp=head;
    for (int i=0; i<idx && temp!=NULL; i++){
        temp=temp->next;
    }
    if (temp==NULL){
        printf("Invalid index");
        return -1;
    }
    int del=temp->data;
    if (temp->next==NULL){
        del=delend();
        return del;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    return del;
}

//Search for an element in the doubly linked list
int list::search(int num){
    if(head==NULL){
        printf("List is empty");
        return -1;
    }

    int idx=0;
    struct node* temp=head;
    while (temp!=NULL){
        if (temp->data==num){
            return idx;
        }
        temp=temp->next;
        idx++;
    }
    printf("Element not found.");
    return -1;
}

// Display all the elements of the doubly linked list
void list::display(){
    if(head==NULL){
        printf("List is empty");
        return ;
    }
    struct node* temp=head;
    while (temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\nReverse print: ");
    temp=tail;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

