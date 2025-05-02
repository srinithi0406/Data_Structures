// Program to find the scores of three players in a word game
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAY 3
#define WORD_SIZE 4

void count_score(char players[MAX_PLAY][1000][WORD_SIZE], int n);

int main(){
    int test, n;
    printf("Enter the number of test cases: ");
    scanf("%d", &test);
    for (int i=0; i<test; i++){
        printf("\nEnter the number of words entered by each player: ");
        scanf("%d", &n);

        char players[MAX_PLAY][1000][WORD_SIZE];

        printf("Enter the words written by each player: ");
        for (int i=0; i<MAX_PLAY; i++){
            for (int j=0; j<n; j++){
                scanf("%s", players[i][j]);
            }
        }

        count_score(players, n);
    }

}

// Calculates and displays the scores of each of the three players
void count_score(char players[MAX_PLAY][1000][WORD_SIZE], int n){
    int points[MAX_PLAY]={0};
    for (int i=0; i<MAX_PLAY; i++){       
        for (int j=0; j<n; j++){
            char *word= players[i][j];
            int count=0;
            for (int k=0; k<MAX_PLAY; k++){
                if (k==i){
                    continue;
                }
                for (int l=0; l<n; l++){
                    if (strcmp(word, players[k][l])==0){
                        count++;
                    }
                }
            }
            if (count==0){
                points[i]+=3;
            }
            else if (count==1){
                points[i]+=1;
        }
        }
        
    }
    printf("Scores of each player: %d %d %d", points[0], points[1], points[2]);
}