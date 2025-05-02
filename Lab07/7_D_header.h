// Heaader file for the program to process the string with + symbol
#include <stdio.h>
#include <stdlib.h>

class stack{
    private:
    struct node{
        char data;
        struct node* next;
    }*top;

    public:
    stack(){
        top=NULL;
    }

    int push(char c);
    char pop();
    char peek();
    int isempty();
};

// Pushes an element to the top of the stack
int stack::push(char c){
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=c;
    newnode->next=top;
    top=newnode;
    return 1;
}

// Pops an element from the top of the stack
char stack::pop(){
    if (top==NULL){
        printf("Stack Underflow");
        return '\0';
    }
    struct node* temp=top;
    char del=temp->data;
    top=temp->next;
    free(temp);
    return del;
}

// Displays the element at the top of the stack
char stack::peek(){
    if (top==NULL){
        printf("Stack is empty");
        return '\0';
    }
    return top->data;
}

// Checks if a stack is empty or not
int stack::isempty(){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
