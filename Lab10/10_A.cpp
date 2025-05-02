// Program to find the minimum number of prefixes to be removed to get a sequence of unique elements
#include <stdio.h>
#include <stdlib.h>

int prefix(int a[], int n);

int main(){
    int test, n;
    printf("Enter the number of test cases: ");
    scanf("%d", &test);
    for (int i=0; i<test; i++){
        printf("\nEnter the length of the sequence: ");
        scanf("%d", &n);

        int a[n];
        printf("Enter the elements of the sequence: ");
        for (int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }

        int ans=prefix(a, n);
        printf("Number of prefixes to be removed: %d\n", ans);

    }
}

// Returns the minimum number of prefixes to be removed to get a sequence of unique elements
int prefix(int a[], int n){
    for (int j=n-1; j>=0; j--){
        for (int k=j-1; k>=0; k--){
            if (a[j]==a[k]){
                return k+1;
            }
        }
    }
    return 0;
}