// Program to find the number of winners in Nene's game
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

void solve(int a[], int group[], int, int);

int main(){
    int test, k, q;
    printf("Enter the number of test cases: ");
    scanf("%d", &test);
    for (int i=0; i<test; i++){
        printf("\nEnter the number of player to be removed and the number of groups: ");
        scanf("%d %d", &k, &q);

        int a[k];
        printf("Enter the positions of the players to be removed: ");
        for (int j=0; j<k; j++){
            scanf("%d", &a[j]);
        }

        int group[q];
        printf("Enter the number of players in each group: ");
        for (int j=0; j<q; j++){
            scanf("%d", &group[j]);
        }
        solve(a, group, k, q);
    }
}

// Finds and displays the number of winners when no more removal is possible
void solve(int a[], int group[], int k, int q){
    sort(a,a+k);
    printf("Number of winners in each group: ");
    for(int i=0; i<q; i++){
        int n=group[i];
        if (n<a[0]){
            printf("%d ", n);
        }
        else{
            printf("%d ", a[0]-1);
        }
    }
    printf("\n");
}