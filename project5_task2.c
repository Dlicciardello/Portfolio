//Dominick Licciardello
//modified version of the project 2 task 2 function using pointer arithmetic input directly after a.out


#include <stdio.h>

// Function to calculate score using pointer arithmetic
int calculate_score(char *word) {
    int score = 0;
    while (*word) {
        if (*word == 'a' || *word == 'e' || *word == 'i' || *word == 'o' || *word == 'u') {
            score += 1;
        } else if (*word == 't' || *word == 'n' || *word == 's' || *word == 'r' || *word == 'h') {
            score += 2;
        } else {
            score += 3;
        }
        word++;
    }
    return score;
}

//check the number of words input is correct
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("invalid number of arguments\n");
        return 1;
    }

//Call calculate score function
    int score1 = calculate_score(argv[1]);
    int score2 = calculate_score(argv[2]);


//Calculate Winner
    if (score1 > score2) {
        printf("Marjorie wins!");
    } else if (score2 > score1) {
        printf("John wins!");
    } else {
        printf("Play again!\n");
    }

    return 0;
}
