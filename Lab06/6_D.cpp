// Menu driven program to check if the open and closed paranthesis in the string is balanced or not
#include <stdio.h>
#include <cstdlib>
#include "6_D_header.h"

int main(){
    stack s;
    int ch;
    char str[100];
    while (1){
        printf("\n\nMenu\n1.Check Balance\n2.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter a string with open and closed parenthesis: ");
            scanf("%s", str);
            printf("Checking Balance...\n");
            check(str);
            break;

            case 2:
            return 0;

            default:
            printf("Invalid choice.");
        }
    }
}