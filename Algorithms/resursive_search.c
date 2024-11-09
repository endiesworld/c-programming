#include <stdio.h>
#include <stdbool.h> // Include the header for bool type

// Pseudo code for Binary search 

// If no doors left
//     Return false 
// If number behind middle door
//     Return true 
// Else if number < middle door
//     Search left half
// Else if number > middle door
//     Search right half

bool binarySearch(int arr_length, int arr[], int search) ;

int main(void) {

    int arr_length = 10;
    int arr[] = { 3,6,9,10,13,15,20,22,23,31} ;

    int search;

    printf("What number would you like to search for");
    scanf("%d", &search);

    bool found = binarySearch(arr_length, arr, search) ;

    if (found){
        printf("Found %d in the store.\n", search);
        return 0 ;
    }

    return printf("%d not found\n", search);
    return 0;

}

bool binarySearch(int arr_length, int arr[], int search){
    
    if (arr_length < 1){
        return false ;
    }

    int middle = (arr_length -1) / 2;

}