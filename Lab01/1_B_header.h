//header file for sort functions

#include <stdio.h>
#include <cstdlib>

//Selection sort
void select(int arr[], int n){
for (int i=0; i<n-1; i++){
int min=i;
for (int j=i+1; j<n; j++){
if (arr[j]<arr[min]){
min=j;	
}	
}
int temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
}
for (int k=0; k<n; k++){
printf("%d ", arr[k]);
}
printf("\n");
}

//Bubble sort
void bubble(int arr[], int n){
for (int i=0; i<n-1; i++){
for (int j=0; j<n-i-1; j++){
if (arr[j]>arr[j+1]){
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for (int k=0; k<n; k++){
printf("%d ", arr[k]);
}
printf("\n");
}

//Insertion sort
void insert(int arr[], int n){
for (int i=0; i<n; i++){
int j=i-1;
int key=arr[i];
while (j>=0 && key<arr[j]){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
for (int k=0; k<n; k++){
printf("%d ", arr[k]);
}
printf("\n");

}

