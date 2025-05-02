/*1.A. Write a C++ menu-driven program to sort a given array in ascending order. Design proper functions, maintain boundary conditions, and follow coding best practices. The menus are as follows,
a.       Bubble Sort
b.      Selection Sort
c.       Insertion Sort
d.      Exit*/

//Menu-driven program to sort the array using selection, bubble or insertion sort
#include <stdio.h>
#include <cstdlib>

void select(int arr[], int n);
void bubble(int arr[], int n);
void insert(int arr[], int n);

int main(){
int n; //no. of elements in array
int arr[n];
int ch; //choice
printf("Menu\n1.Selection Sort\n2.Bubble Sort\n3.Insertion Sort\n4.Exit\n");
printf("Enter your choice: ");
scanf("%d", &ch);

while (ch){
if (ch==1){  //getting array input performing selection sort for choice1
printf("Enter the number of elements in array:");
scanf("%d", &n);
for (int i=0; i<n; i++){
scanf("%d", &arr[i]);
}
select(arr, n);
}

else if (ch==2){  //getting array input performing bubble sort for choice2
printf("Enter the number of elements in array:");
scanf("%d", &n);
for (int i=0; i<n; i++){
scanf("%d", &arr[i]);
}
bubble(arr, n);
}

else if (ch==3){  //getting array input performing insertion sort for choice3
printf("Enter the number of elements in array:");
scanf("%d", &n);
for (int i=0; i<n; i++){
scanf("%d", &arr[i]);
}
insert(arr, n);
}

else if (ch==4){ //Exits the program for choice 4
break;
}

else{
printf("Invalid choice");
}

printf("\nEnter your choice: ");
scanf("%d", &ch);
}

return 0;
}

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

//Insertion Sort
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
