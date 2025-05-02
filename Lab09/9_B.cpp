// Program to display the advantage (strength differences) for each participant)
#include <stdio.h>
#include <stdlib.h>

void calc(int strength[], int n);

int main(){
    int test,n;
    printf("Enter the number of test cases: ");
    scanf("%d", &test);

    for (int i=0; i<test; i++){
        printf("\nEnter the number of players: ");
        scanf("%d", &n);

        int strength[n];
        printf("Enter the strength of the each player: ");
        for (int j=0; j<n; j++){
            scanf("%d", &strength[j]);
        }

        calc(strength, n);
        printf("\n");
    }
}

// Display the advantage (strength differences) for each participant
void calc(int strength[], int n){
    int max1=0;
    int max2=0;
    for (int j=0; j<n; j++){
        if (strength[j]>max1){
            max2=max1;
            max1=strength[j];
        }
        else if (strength[j]>max2){
            max2=strength[j];
        }
    }
    
    printf("Strength differences: ");
    for (int i=0; i<n; i++){
        if (strength[i]!=max1){
            printf("%d ", strength[i]-max1);
        }
        else{
            printf("%d ", strength[i]-max2);
        }
    }
}