//Menu-driven program to perform inserting and merging lists in ascending order
#include <stdio.h>
#include <stdlib.h>
#include "4_B_header.h"

int main(){
    list l;
    int choice, value;

    while (1) {
        printf("\nMenu\n1.Insert list1\n1.Insert list2\n3.Merge List\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert in List 1: ");
                scanf("%d", &value);
                l.createlist1(value);
                l.display1();
                break;
            case 2:
                printf("Enter value to insert in List 2: ");
                scanf("%d", &value);
                l.createlist2(value);
                l.display2();
                break;
            case 3:
                printf("Merged list\n");
                l.mergelist();
                l.displaymerged();
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

}

