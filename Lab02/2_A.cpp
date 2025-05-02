//menu driven program to check if a number is a palindrome, armstrong or perfect number using pointers
#include <stdio.h>
#include <cstdlib>
#include <math.h>

void palindrome(int *num);
void armstrong(int *num);
void perfect(int *num);

int main(){
    int *num=(int *)(malloc(sizeof(int)));
    int *ch=(int *)(malloc(sizeof(int)));
    if (num == NULL){
        printf("Memory not allocated");
        return 1;
    }
    printf("Memory allocated");
    while (1){
        printf("\nMenu\n1.Palindrome\n2.Armstrong Number\n3.Perfect number\n4.Exit\n");
        *ch=printf("Enter your choice: ");
        scanf("%d", ch);
        if (*ch==1){
            printf("Enter a number: ");
            scanf("%d", num);
            palindrome(num);
        }
        else if (*ch==2){
            printf("Enter a number: ");
            scanf("%d", num);
            armstrong(num);
        }
        else if (*ch==3){
            printf("Enter a number: ");
            scanf("%d", num);
            perfect(num);
        }
        else if (*ch==4){
            break;
        }
        else{
            printf("Invalid choice");
        }
    }
}

//checks if a number is palindrome or not
void palindrome(int *num){
    int *org= (int *)(malloc(sizeof(int)));
    *org=*num;
    int *rev= (int *)(malloc(sizeof(int)));
    *rev=0;
    int *digit= (int *)(malloc(sizeof(int)));
    
    while ((*org)>0){
        *digit=(*org) % 10;
        *rev= ((*rev)*10)+ (*digit);
        *org=(*org) / 10;
        
    }

    if (*rev==*num){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}

//checks if a number is an armstrong number or not
void armstrong(int *num){
    int *temp= (int *)(malloc(sizeof(int)));
    int *digits= (int *)(malloc(sizeof(int)));
    int *sum= (int *)(malloc(sizeof(int)));
    int *n= (int *)(malloc(sizeof(int))); //each digit of the number

    *temp=*num;
    while((*temp)>0){
        (*digits)++;
        (*temp)= (*temp)/10;
    }

    *temp=*num;
    *sum=0;
    while ((*temp)>0){
        *n= (*temp) % 10;
        (*sum)+= pow((*n), (*digits));
        (*temp)= (*temp)/10;
    }

    if ((*sum)== (*num)){
        printf("Armstrong number");
    }
    else{
        printf("Not an Armstrong number");
    }

}

//checks if a number is a perfect number or not
void perfect(int *num){
    int *i= (int *)(malloc(sizeof(int)));
    int *sum= (int *)(malloc(sizeof(int)));
    *sum=0;
    for ((*i)=1; (*i) < (*num); (*i)++){
        if ((*num)%(*i) ==0){
            (*sum)+=(*i);
        }
    }

    if ((*sum)==(*num)){
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
}