// Heaader file for the program to check if  paranthesis in the string is balanced - Stack ADT 
#include <stdio.h>
#include <cstdlib>

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

// Checks and displays if the open and closed paranthesis in the string is balanced or not
void check(char* str){
    stack s;
    for (int i=0; str[i]!='\0'; i++){
        char ch=str[i];
        if (ch=='('){
            s.push(ch);
        }
        else if (ch==')'){
            if (s.isempty()){
                printf("String is unbalanced.");
                return;
            }
            else{
                s.pop();
            }
        }
    }

    if (s.isempty()){
        printf("The string is balanced.");
    }
    else{
        printf("The string is unbalanced.");
    }
    
}

