// Menu driven program to implement ListADT using singly linked list
#include <stdio.h>
#include <cstdlib>

class list{
    private:
    struct node{
        int data;
        struct node* next;
    }* head;

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
    void printReverse(struct node* head);
    void disprev();
    void revlink();
    void display();
    
};

int main(){
    int ch, num, idx, del;
    list l1;
    while (1){
        printf("\nMenu\n1.Insert Beginning\n2.Insert End\n3.Insert Position\n4.Delete Beginning\n5.Delete End\n6.Delete Position\n7.Serach\n8.Display\n9.Display reverse\n10.Reverse link\n11.Exit");
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
                printf("Element is found at: %d", idx);
            }
            break;

            case 8:
            l1.display();
            break;

            case 9:
            l1.disprev();
            break;
            
            case 10:
            l1.revlink();
            break;

            case 11:
            return 0;

            default:
            printf("Invalid choice.");
        }
    }
}

// Inserts an element at the beginning of the list 
int list::insertbeg(int num){
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=head;

    head=newnode;
    return 1;
}

// Inserts an element at the end of the list 
int list::insertend(int num){
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    
    if (head == NULL) { // If the list is empty
        head = newnode;
        return 1;
    }
    
    struct node* temp=head;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return 1;

}

// Inserts the given element at the given index
int list::insertpos(int num, int idx){
    if (idx==0){
        insertbeg(num);
        return 1;
    }

    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;

    
    struct node* temp=head;
    for (int i=0; i<idx-1 && temp!=NULL; i++){
        temp=temp->next;
    }
    if (temp==NULL){
        printf("Invalid index. ");
        return -1;
    }

    newnode->next=temp->next;
    temp->next=newnode;
    return 1;
    
}

// Deletes an element from the beginning of the list
int list::delbeg(){
    if (head==NULL){
        printf("List is empty");
        return -1;
    }
    struct node* temp=head;
    int del=head->data;
    head=head->next;
    free(temp);
    return del;
}

// Deletes an element from the end of the list
int list::delend(){
    if (head==NULL){
        printf("List is empty");
        return -1;
    }

    if (head->next==NULL){ //If only one element is in the list
        int del=head->data;
        free(head);
        head=NULL;
        return del;
    }

    struct node* temp= head;
    while (temp->next->next!=NULL){
        temp=temp->next;
    }
    int del=temp->next->data;
    free(temp->next);
    temp->next=NULL;
    return del;
}

// Deletes the element at the given index from the list
int list::delpos(int idx){
    if (head==NULL){
        printf("List is empty");
        return -1;
    }
    if (idx==0){
        int del=delbeg();
        return del;
    }
    struct node* temp=head;
    for (int i=0; i<idx-1 && temp!=NULL; i++){
        temp=temp->next;
    }
    if (temp==NULL || temp->next == NULL){
        printf("Invalid index.\n");
        return -1;
    }
    struct node* delptr=temp->next;
    temp->next=delptr->next;
    int del= delptr->data;
    free(delptr);
    return del;

}

//Searches for the given element in the list
int list::search(int num){
    if (head==NULL){
        printf("List is empty");
        return -1;
    }

    struct node* temp=head;
    int idx=0;
    while  (temp!=NULL){
        if (temp->data==num){
            return idx;
        }
        temp=temp->next;
        idx++;
    }
    printf("Element not found. ");
    return -1;
}

//displays all the elements of the list
void list::display(){
    if (head==NULL){
        printf("List is empty");
        return;
    }

    struct node* temp=head;
    while (temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}

//Prints the reversed list
void list::printReverse(struct node* head){
    if (head == NULL){
        return;
    } 
    printReverse(head->next);  
    printf("%d ", head->data); 
}

void list::disprev(){
    if (head == NULL){
        printf("List is empty\n");
        return;
    }
    printReverse(head);
    printf("\n");
}

//Reverses the linked list
void list::revlink(){
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node* prev=NULL;
    struct node* nextptr=NULL;
    while (head!=NULL){
        nextptr=head->next;
        head->next=prev;
        prev=head;
        head=nextptr;
    }
    head=prev;
    display();
    
}