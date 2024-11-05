//Dominick Licciardello
//User Enters a Sequence and program determines if it is a "Good" sequence
#include <stdio.h>

int square_test(int a, int b); //initialize the function for testing if a larger number is a square

int main(){

    int size, i;
    //Finds the size of the sequence
    printf("Enter the size of sequence: ");
    scanf("%d", &size);

    //Initialize the array for the sequence
    int numbers[size];
    printf("Enter numbers: ");

    //Stores the Array up to the size entered
    for(i=0;i<size;i++){
        scanf("%d", &numbers[i]);

        //No negative number can be a good sequence
        if (numbers[i]<0){
            printf("Output: no");
            return 0;
        }
        // if >= will run square test function to see if the number is a square of a smaller number
        else if (numbers[i]>= size){
            int value;
            value = square_test(numbers[i], size);

            //If it was not a square, function will output no and cancel running
            if (value == 1){
                printf("Output: no");
                return 0;
            }
        }

    }
    //If it makes it through all numbers in the sequence, it will output yes
    printf("Output: yes");
    return 0;
}

//Function for testing if a larger number is a square
int square_test(int a, int b){
    int i;

    //Tests if the number in the sequence is a square of any smaller number, if it is, it outputs 0, if not, returns 1.
    for (i=1;i<b;i++){
        if (a == i*i)
            return 0;            
    }
    return 1;
}