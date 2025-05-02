//Program to find the maximum number of blocks on Tower1
#include <stdio.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int move(int a[], int n);

int main(){
    int test,n;
    printf("Enter the number of test cases: ");
    scanf("%d", &test);

    for(int i=0; i<test; i++){
        printf("\nEnter the number of towers: ");
        scanf("%d", &n);

        int a[n];
        printf("Enter the number of blocks in each tower: ");
        for (int j=0; j<n; j++){
            scanf("%d", &a[j]);
        }

        int t1=move(a, n);
        printf("Maximum number of blocks on Tower 1 is: %d\n", t1);
    }
}

//Returns the maximum number of blocks possible on Tower 1
int move(int a[], int n){
    int change;
    sort(a+1, a+n);
    for (int i=1; i<n; i++){
        if (a[i]>a[0]){
            change= (a[i]-a[0]+1)/2;
            a[0]+=change;
            a[i]-=change;
        }
    }
    return a[0];
}