// Program to process the string with + symbol by removing the '+' symbol and the immediate left non-'+' symbol
#include <stdio.h>
#include <stdlib.h>
#include "7_D_header.h"

char result[100];
void process(char* str);

int main(){
    char str[100];
    printf("Enter a string with + symbols: ");
    scanf("%s", str);
    process(str);
}

// Processes and prints the string by removing the '+' symbol and the immediate left non-'+' symbol
void process(char* str){
    stack s;
    stack temp;
    for (int i=0; str[i]!='\0'; i++){
        if (str[i]=='+'){
            if (!s.isempty()){
                s.pop();
            }
        }
        else{
            s.push(str[i]);
        }
    }

    while (!s.isempty()){
        temp.push(s.pop());
    }

    int i=0;
    while (!temp.isempty()){
        result[i++]=temp.pop();
    }
    result[i]='\0';

    printf("Processed string: %s", result);

}