//Dominick Licciardello
//Numbers game with turns using pointer arithmetic

#include <stdio.h>

int s_turn = 1;  // Global Variable to determine turn order

// Function to determine the winner of each round.
void round_result(int *board, int n) {
    
    //Assigns pointer to start of board
    int *left = board;            
    
    //Assigns pointer to the end of the board
    int *right = board + n - 1;   

    //Sets totals for rount to 0 to start
    int marjorie_sum = 0, john_sum = 0;

    int turn = s_turn;

    //iterates through board without using counter variables or array subscripting
    while (left <= right) {
        // Pick the larger number from the two ends.
        if (*left >= *right) {
            if (turn) marjorie_sum += *left++;
            else john_sum += *left++;
        } else {
            if (turn) marjorie_sum += *right--;
            else john_sum += *right--;
        }
        // Switch turn after each pick.
        turn = 1 - turn;
    }

    //Results of each round
    if (marjorie_sum > john_sum) {
        printf("Marjorie\n");
        s_turn = 1 - s_turn;
    } else if (john_sum > marjorie_sum) {
        printf("John\n");
        s_turn = 1 - s_turn;
    } else {
        printf("Draw\n");
        s_turn = 1 - s_turn;
    }
}

int main() {
    int T;
    scanf("%d", &T);  // Read number of rounds.

    for (int round = 0; round < T; round++) {
        
        //Reads number of irems stored in board
        int N;
        scanf("%d", &N);
        int board[N];

        //Assigns values to board without using array subscripting or counter variables
        for (int *p = board; p < board + N; p++) {
            scanf("%d", p);
        }

        //Call the function to determine the results of each round
        round_result(board, N);
    
    }
    return 0;
}