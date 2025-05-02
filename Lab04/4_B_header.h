//Header file with list class and functions to insert elements and merge lists
#include <stdio.h>
#include <stdlib.h>

class list{
    struct node{
        int data;
        struct node* next;
    }*head1,*head2,*head;

    public:
    list(){
        head1=NULL;
        head2=NULL;
        head=NULL;
    }

    void createlist1(int value);
     void createlist2(int value);
     void display1();
     void display2();
     void mergelist();
     void displaymerged();

};

// Inserts elements into list1 in ascending order
void list:: createlist1(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    struct node* temp;
    newnode->data=value;
    if(head1==NULL){
        head1=newnode;
        newnode->next=0;
    }
    else{
        temp=head1;
        if(temp->data>value){
            newnode->next=head1;
            head1=newnode;
        }
       else{
        while(temp->next!=0 && temp->next->data <=value){
            temp=temp->next;
        }
            newnode->next=temp->next;
            temp->next=newnode;
        
    }
       }
 }

// Inserts elements into list2 in ascending order
void list::createlist2(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    struct node* temp;
    newnode->data=value;
    if(head2==NULL){
        head2=newnode;
        newnode->next=0;
    }else{
        temp=head2;
        if(temp->data>value){
            newnode->next=head2;
            head2=newnode;
        }
       else{
        while(temp->next!=0 && temp->next->data <=value){
            temp=temp->next;
        }
            newnode->next=temp->next;
            temp->next=newnode;
        
    }
       }
 
 }

// Displays the elements of list1
void list::display1(){
    struct node* temp;
    temp=head1;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
 }


// Displays the elements of list2
void list::display2(){
    struct node* temp;
    temp=head2;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
 }


//Merges list1 and list2 in ascending order
void list::mergelist(){
    struct node* temp;
    struct node* temp1;
    struct node* temp2;
    temp1=head1;
    temp2=head2;
    while(temp1!=0 && temp2!=0){
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        if(temp1->data >= temp2->data){
            newnode->data=temp2->data;
           
            temp2=temp2->next;
            if(head==NULL){
                head=newnode;
            }else{
                temp=head;
                while(temp->next!=0){
                    temp=temp->next;
                }
                temp->next=newnode;
            }
       }
       else if(temp2->data >temp1->data){
            newnode->data=temp1->data;
            temp1=temp1->next;
            if(head==NULL){
                head=newnode;
            }else{
                temp=head;
                while(temp->next!=0){
                    temp=temp->next;
                }
                temp->next=newnode;
            }
            

       }
    }
    while(temp1!=0){
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        newnode->data=temp1->data;
        if(head==NULL){
            head=newnode;
        }else{
            temp=head;
            while(temp->next!=0){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        temp1=temp1->next;


    }
    while(temp2!=0){
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        newnode->data=temp2->data;
        if(head==NULL){
            head=newnode;
        }else{
            temp=head;
            while(temp->next!=0){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        temp2=temp2->next;


    }
 }

//Prints the merged list
void list::displaymerged(){
    struct node* temp;
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}