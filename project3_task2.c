//Dominick Licciardello
//Searches an entered array for duplicates and deletes them,also sorts in value order.

#include <stdio.h>

int find_distinct(int array[], int size);
void selection_sort(int a[], int n);

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
    }

    // runs functions to sort then save unique numbers
    selection_sort(numbers, size);
    size = find_distinct(numbers, size);

    //print results
    printf("Output: ");
    for(i=0;i<size;i++)
        printf("%d ", numbers[i]);

    return 0;
}



int find_distinct( int array[], int size)  
{  

    //crate result for array with only 1 of each number 
    int result[size];   
      
    // Declare new variables
    int i, new_size = 0;  
      
    for (i = 0; i < size - 1; i++)  
    {  
    
        // Insert element into result which are different that the next number in the array 
        if (array[i] != array[i + 1]){  
            result[new_size] = array[i];
            new_size++;
        } 
    }
        
    // Insert the last element
    result[new_size] = array[size - 1];  
    new_size++;
    
    // copy result into the array
    for (i = 0; i < new_size; i++)  
    {  
        array[i] = result[i];  
    }     
    
    // Return the new array size       
    return new_size;     
}  

//Sorts the array into smallest to largest order
void selection_sort(int a[], int n){

    // nested for loop to find unique values
    for (int i = 0; i < n - 1; i++) {
        int max = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[max])
                max = j;
        }
        int temp = a[max];
        a[max] = a[i];
        a[i] = temp;
    }
}
