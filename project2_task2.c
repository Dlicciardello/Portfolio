//Dominick Licciardello
//Word Game similar to Scrabble with two players
#include <stdio.h>

int main(){

    //Initialize Variables
    int player1, p1_score;
    p1_score = 0;
    int player2, p2_score;
    p2_score = 0;


    //First Players Turn
    printf("Enter the first sequence: ");
    while ((player1 = getchar()) != '\n'){
        
        if (player1 >='A' && player1<='Z')
            player1 = ((player1 -'A')+ 'a');
        
        if (player1 =='a'||player1 =='e'||player1 =='i'||player1 =='o'||player1 =='u'){
            p1_score++;
        }
        else if (player1 == 't' ||player1 =='n'|| player1 =='s' ||player1 =='r'||player1 == 'h'){
            p1_score += 2;
        }
        else if(player1 == ' '){
            p1_score += 0;
        }
        else{
            p1_score += 3;
        }
        }
    
    //Second Players Turn
    printf("Enter the second sequence: ");
    while ((player2 = getchar()) != '\n'){
        
        if (player2 >='A' && player2<='Z')
            player2 = ((player2 -'A')+ 'a');
        
        if (player2 =='a'||player2 =='e'||player2 =='i'||player2 =='o'||player2 =='u'){
            p2_score++;
        }
        else if (player2 == 't' ||player2 =='n'|| player2 =='s' ||player2 =='r'||player2 == 'h'){
            p2_score += 2;
        }
        else if(player2 == ' '){
            p2_score += 0;
        }
        else{
            p2_score += 3;
        }
        }
    
    //Score Conmparison
    if (p1_score>p2_score){
        printf("Marjorie wins!");
    }
    else if (p2_score>p1_score){
        printf("John wins!");
    }
    else{
        printf("Play again!");
    }

    return 0;
}