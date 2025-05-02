//menu driven program to implement listADT
#include <stdio.h>
#include <cstdlib>
#define SIZE 5

class List{
    private:
    int arr[SIZE];
    int count=0;

    public:
    List(){
        arr[SIZE]={0};
        count=0;
    }

    int insertbeg(int val);
    int insertend(int val);
    int insertpos(int val, int idx);
    int delbeg();
    int delend();
    int delpos(int idx);
    int search(int val);
    int display();
    void rotate(int k);

};

int main(){
    int ch, val, idx, delval, k;
    List list;
    while (true){
        printf("\nMenu\n1.Insert Beginning\n2.Insert End\n3.Insert Position\n4.Delete Beginning\n5.Delete End\n6.Delete Position\n7.Serach\n8.Display\n9.Rotate\n10.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter the value to be inserted: ");
            scanf("%d", &val);
            list.insertbeg(val); 
            break;

            case 2:
            printf("Enter the value to be inserted: ");
            scanf("%d", &val);
            list.insertend(val); 
            break;

            case 3:
            printf("Enter the value to be inserted: ");
            scanf("%d", &val);
            printf("Enter the index at which the value has to be inserted: ");
            scanf("%d", &idx);
            list.insertpos(val, idx); 
            break;

            case 4:
            delval=list.delbeg();
            if (delval!=-1){
                printf("Deleted element is: %d", delval);
            }
            else{
                printf("Element not deleted");
            }
            break;

            case 5:
            delval=list.delend();
            if (delval!=-1){
                printf("Deleted element is: %d", delval);
            }
            else{
                printf("Element not deleted");
            }
            break;

            case 6:
            printf("Enter the index of the element which has to be deleted: ");
            scanf("%d", &idx);
            delval=list.delpos(idx);
            if (delval!=-1){
                printf("Deleted element is: %d", delval);
            }
            else{
                printf("Element not deleted");
            }
            break;

            case 7:
            printf("Enter the value to be searched for: ");
            scanf("%d", &val);
            idx=list.search(val);
            if (idx==-1){
                printf("Element not found");
            }
            else{
                printf("ELement is found at index: %d", idx);
            }
            break;

            case 8:
            list.display();
            break;

            case 9:
            printf("Enter the number of rotations you want to perform: ");
            scanf("%d", &k);
            list.rotate(k);
            break;

            case 10:
            return 0;

            default:
            printf("Invalid choice");
        }
    }
}

//inserts the given element at the beginning
int List::insertbeg(int val){
        if (count==SIZE){
            printf("List is full");
            return -1;
        }
        
        for (int i=count; i>0; i--){
                arr[i]=arr[i-1];
            }
            arr[0]=val;
            count++;
        
        return 0;
    }

//inserts the given element at the end
int List::insertend(int val)  {
    if (count==SIZE){
            printf("List is full");
            return -1;
    }
    arr[count]=val;
    count++;
    return 0;
    
}

//inserts the given element at the given index
int List::insertpos(int val, int idx){
    if (count==SIZE){
            printf("List is full");
            return -1;
    }
    for (int i=count; i>idx; i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=val;
    count++;
    return 0;

}

//Deletes the beginning element
int List::delbeg(){
    if (count==0){
        printf("List is empty");
        return -1;
    }
    int del= arr[0];
    for (int i=0; i<count-1; i++){
        arr[i]=arr[i+1];
    }
    count--;
    return del;
}

//Deletes one element at the last
int List::delend(){
    if (count==0){
        printf("List is empty");
        return -1;
    }
    int del=arr[count-1];
    count--;
    return del;
}

//Deletes the element at the given index
int List::delpos(int idx){
    if (count==0){
        printf("List is empty");
        return -1;
    }
    int del=arr[idx];
    for(int i=idx; i<count-1; i++){
        arr[i]=arr[i+1];
    }
    count--;
    return del;
}

//Searches and returns the index of the given element from the list
int List::search(int val){
    for(int i=0; i<count; i++){
        if (arr[i]==val){
            return i;
        }
    }
    return -1;
}

//Displays all the elements of the list
int List::display(){
    if (count==0){
        printf("List is Empty");
    }
    else{
        for(int i=0; i<count; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}

//Rotates the list right side by k times
void List::rotate(int k){
    k=k%count;
    for(int j=1; j<=k; j++){

    int temp=arr[count-1];
    for (int i=count-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("\nAfter %d rotation(s): ", j);
    display();
    }

}
