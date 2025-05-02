// Menu driven program to implement infix to postfix and postfix evaluation using Stack ADT-Singly Linked List
#include <stdio.h>
#include <cstdlib>
#include "6_C_header.h"

int main(){
    int ch;
    char infix[100], postfix[100];
    while (1){
        printf("\nMenu\n1.Get infix\n2.Convert infix\n3.Evaluate postfix\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter an infix expression: ");
            scanf("%s", infix);
            break;

            case 2:
            convert(infix, postfix);
            break;

            case 3:
            printf("Evaluating the postfix expression...\n");
            printf("Output of the expression: %d", evaluate(postfix));
            break;

            case 4:
            return 0;

            default:
            printf("Invalid choice.\n");
        }
    }
}

