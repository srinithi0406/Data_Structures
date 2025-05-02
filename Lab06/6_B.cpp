// Program to perform the operations of Stack-ADT - Singly Linked list
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
};

int main(){
    int ch;
    char c, del, element;
    stack s;
    while (1){
        printf("\nMenu\n1.Push\n2.Pop\n3.Peek\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter the character to be pushed: ");
            scanf(" %c", &c);
            s.push(c);
            break;

            case 2:
            del=s.pop();
            if (del!='\0'){
                printf("Popped element: %c\n", del);
            }
            break;

            case 3:
            element=s.peek();
            if (element!='\0'){
                printf("Peek element: %c\n", element);
            }
            break;

            case 4:
            return 0;

            default:
            printf("Invalid choice.\n");
        }
    }
}

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

//Displays the element at the top of the stack
char stack::peek(){
    if (top==NULL){
        printf("Stack is empty");
        return '\0';
    }
    return top->data;
}



