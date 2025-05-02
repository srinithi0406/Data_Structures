// Menu-driven program to perform linear and binary search in an array
#include <stdio.h>
#include <cstdlib>
#include "1_B_header.h"

void linear(int arr[], int n, int key);
int binary(int arr[], int n, int key);

int main(){
int n;
printf("Enter the number of elements in array:");
scanf("%d", &n);
int arr[n];
for (int i=0; i<n; i++){
scanf("%d", &arr[i]);
}
int ch, key;
printf("Enter the element to be searched: ");
scanf("%d", &key);

printf("Menu\n1.Linear search\n2.Binary search\n3.Exit\n");
printf("Enter your choice: ");
scanf("%d", &ch);

while (ch){
if (ch==1){ 
linear(arr, n, key);
}

else if (ch==2){ 
bubble(arr, n);
int idx=binary(arr, n, key);
if (idx==-1){
printf("Element not found");
}
else{
printf("Element found at %d", idx);
}
}

else if (ch==3){ 
break;
}

else{
printf("Invalid choice");
}

printf("\nEnter your choice: ");
scanf("%d", &ch);
}
}

// Linear search
void linear(int arr[], int n, int key){
int found=0;
for (int i=0; i<n; i++){
if (key==arr[i]){
found=1;
printf("The element is found at: %d", i);
break;
}
}
if (found==0){
printf("Element not found");
}
}

// Binary search
int binary(int arr[], int n, int key){
int low=0; int high=n-1;
int mid=(low+high)/2;
while (high>low){
if (arr[mid]==key){
return mid;
break;
}
else if (arr[mid]<key){
low=mid+1;
}
else if (arr[mid]>key){
high=mid-1;
}
}
return -1;
}
