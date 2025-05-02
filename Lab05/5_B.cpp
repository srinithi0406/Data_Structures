//Program to perform the operations of List-ADT - Circular Linked List
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

    int insertbeg(int num);
    int insertend(int num);
    int insertpos(int num, int idx);
    int delbeg();
    int delend();
    int delpos(int idx);
    int search(int num);
    void display();
};

int main(){
    int ch, num, idx, del;
    list l1;
    while (1){
        printf("\nMenu\n1.Insert beginning\n2.Insert end\n3.Insert position\n4.Delete Beginning\n5.Delete End\n6.Delete Position\n7.Search\n8.Display\n9.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            l1.insertbeg(num);
            break;
            case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            l1.insertend(num);
            break;
            case 3:
            printf("Enter a number: ");
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
            printf("Enter the index of the element that has to be deleted: ");
            scanf("%d", &idx);
            del=l1.delpos(idx);
            if (del!=-1){
                printf("Deleted element is: %d", del);
            }
            break;
            case 7:
            printf("Enter the number to search for: ");
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

// Insertion of an element at the beginning of the circular linked list
int list::insertbeg(int num){
    struct node* newnode= (node*)malloc(sizeof(struct node));
    newnode->data=num;
    if (head==NULL){
        head=newnode;
        newnode->next=head;
        return 1;
    }

    struct node*temp=head;
    while (temp->next!=head){
            temp=temp->next;
    }
    newnode->next=head;
    head=newnode;
    temp->next=head;
    return 1;

}

// Insertion of an element at the end of the circular linked list
int list::insertend(int num){
    struct node* newnode= (node*)malloc(sizeof(struct node));
    newnode->data=num;
    if (head==NULL){
        head=newnode;
        newnode->next=head;
        return 1;
    }
    struct node* temp=head;
    while (temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    return 1;
}

//Insertion at a given index in the circular linked list
int list::insertpos(int num, int idx){
    struct node* newnode= (node*)malloc(sizeof(struct node));
    newnode->data=num;
    if (head==NULL){
        head=newnode;
        newnode->next=head;
        return 1;
    }
    if (idx==0){
        return insertbeg(num);
    }
    struct node* temp=head;
    int i;
    for (i=0; i<idx-1 && temp->next!=head; i++){
        temp=temp->next;
    }
    
    if (i<idx-1){
        printf("Invalid index");
        return -1;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return 1;
}

//Deletion at the beginning of the circular linked list
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

//Deletion at the end of the circular linked list
int list::delend(){
    if(head==NULL){
        printf("List is empty.");
        return -1;
    }
    if (head->next==head){
        int del=head->data;
        head=NULL;
        return del;
    }
    struct node* temp=head;
    while (temp->next->next!=head){
        temp=temp->next;
    }
    int del=temp->next->data;
    temp->next=head;
    temp=temp->next;
    return del;

}

//Deletion at a given index in the circular linked list
int list::delpos(int idx){
    if(head==NULL){
        printf("List is empty.");
        return -1;
    }
    if (idx==0){
        return delbeg();
    }
    struct node* temp=head;
    int i;
    for (i=0; i<idx-1 && temp->next!=head; i++){
        temp=temp->next;
    }
    if (temp->next==head){
        printf("Invalid index");
        return -1;
    }

    int del=temp->next->data;
    temp->next=temp->next->next;
    return del;
}

// Search for an element in the circular linked list
int list::search(int num){
    if (head==NULL){
        printf("List is empty");
        return -1;
    }
    struct node* temp=head;
    int idx=0;
    while(true){
        if (temp->data==num){
            return idx;
        }
        temp=temp->next;
        idx++;
        if (temp==head){
            break;
        }
    }
    printf("Element not found.");
    return -1;
}

// Display all the elements of the circular linked list
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
