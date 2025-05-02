// Program to perform the operations of Stack-ADT - Array
#include <stdio.h>
#include <cstdlib>
#define SIZE 5

class stack{
    private:
    char arr[SIZE];
    int top;

    public:
    stack(){
        arr[SIZE]={0};
        top=-1;
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
            if (del!='0'){
                printf("Popped element: %c\n", del);
            }
            break;

            case 3:
            element=s.peek();
            if (element!='0'){
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
    if (top==SIZE-1){
        printf("Stack is full.(Overflow)\n");
        return -1;
    }
    top++;
    arr[top]=c;
    return 1;
}

//Pops an element from the top of the stack
char stack::pop(){
    if (top==-1){
        printf("Stack is empty.(Underflow)\n");
        return '0';
    }
    char del=arr[top];
    top--;
    return del;
}

// Displays the element at the top of the stack
char stack::peek(){
    if (top==-1){
        printf("Stack is empty.\n");
        return '0';
    }
    return arr[top];
}

