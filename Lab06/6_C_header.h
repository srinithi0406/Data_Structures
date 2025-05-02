// Header file for the program to implement infix to postfix and postfix evaluation using Stack ADT-Singly Linked List
#include <stdio.h>
#include <cstdlib>
#include <ctype.h> 

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

// Returns a number based on precedence for each operator
int precedence(char op){
    if (op=='='){
        return 1;
    }
    if (op=='+' || op=='-'){
        return 2;
    }
    if (op=='*' || op=='/' || op=='%'){
        return 3;
    }
    return 0;
}

//Converts the infix expression to postfix
void convert(char* infix, char* postfix){
    stack s;
    int idx=0;
    
    for (int i=0; infix[i]!='\0'; i++){
        char ch=infix[i];
        
        if (isdigit(ch)){
            while (isdigit(infix[i])) {  
                postfix[idx++] = infix[i++];
            }
            postfix[idx++] = ' '; 
            i--; 
        }
        else{
            while (s.isempty()!=1 && precedence(s.peek())>=precedence(ch)){
                postfix[idx]=s.pop();
                idx++;
                postfix[idx++] = ' ';
            }
            s.push(ch);
        }
    }
    
    while(s.isempty()!=1){
        postfix[idx]=s.pop();
        idx++;
        postfix[idx++] = ' ';
    }
    postfix[idx]='\0';
    printf("Postfix expression: %s", postfix);
}

//Evaluates the postfix expression
int evaluate(char* postfix) {
    stack s;
    int i = 0;
    char ch;
    
    while (postfix[i] != '\0') {
        if (isdigit(postfix[i])) { 
            int num = 0;
            while (isdigit(postfix[i])) {
                num = num*10 + (postfix[i] - '0'); 
                i++;
            }
            s.push(num); 

        } 
        
        else if (postfix[i] != ' ') {
            int b = s.pop();
            int a = s.pop();

            switch (postfix[i]) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
                case '%': s.push(a % b); break;
                case '=':
                    printf("Result = %d\n", b);
                    return b;
            }
        }
        i++; 
    }
    return s.pop();
}