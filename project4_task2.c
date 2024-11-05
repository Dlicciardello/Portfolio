//Dominick Licciardello
//User Enters array and code checks each poistion and counts duplicates of that number before and after the position.

#include <stdio.h>

int i = 0;

void before_after(int *array, int n) {
    //iterates through each array position 
    for (int *p = array; p < array + n; p++) {
        //initialized the count for each position
        int count_before = 0, count_after = 0;
        for (int *q = array; q < array + n; q++) {
            if (q == p) continue;
            //checks position and stores value of before and after
            if (*q == *p) {
                if (q < p) count_before++;
                else count_after++;
            }
        }
        //prints the two integers "B" and "A"
        printf("%d %d\n",count_before, count_after);
    }
}


int main() {

    //Reads size of array
    int n;
    scanf("%d", &n);
    int array[n];

    //Assigns values to array
    for (int *p = array; p < array + n; p++) {
        scanf("%d", p);
    }

    //Call the function    
    before_after(array, n);       
    return 0;
}