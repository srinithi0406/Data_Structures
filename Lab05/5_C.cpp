// Program to implement Round-Robin scheduling algorithm using Circular Linked List
#include <stdio.h>
#include <cstdlib>
#include "5_C_header.h"

int main(){
    int ch, tslot, ptime;
    list l;
    printf("Enter the fixed time slot: ");
    scanf("%d", &tslot);
    while (true){
        printf("\nMenu\n1.Insert Process\n2.Execute\n3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter a process execution time: ");
            scanf("%d", &ptime);
            l.insert(ptime);
            break;
            case 2:
            l.execute(tslot);
            break;
            case 3:
            return 0;
            default:
            printf("Invalid choice.");
        }
    }
}