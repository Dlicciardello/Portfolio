//Dominick Licciardello
//Splits a two word string into two strings containing one word each

#include <stdio.h>

// Function to read a line of input
void read_line(char *str, int n) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (n > 1) {
            *str++ = ch;
            n--;
        }
    }
    *str = '\0';
}

// Function to split the input string into two words
void split(char *input, char *word1, char *word2) {
    // Skip leading white spaces
    while (*input == ' ') {
        input++;
    }

    // Copy the first word
    while (*input != ' ' && *input != '\0') {
        *word1++ = *input++;
    }
    *word1 = '\0';

    // Skip white spaces between words
    while (*input == ' ') {
        input++;
    }

    // Copy the second word
    while (*input != ' ' && *input != '\0') {
        *word2++ = *input++;
    }
    *word2 = '\0';
}

int main() {
    char input[1001];
    char word1[501], word2[501];

    printf("Enter input: ");
    read_line(input, 1001);

    split(input, word1, word2);

    printf("Word #1: %s\n", word1);
    printf("Word #2: %s\n", word2);

    return 0;
}
