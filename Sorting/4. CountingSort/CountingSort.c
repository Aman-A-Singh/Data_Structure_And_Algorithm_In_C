/* 
 * File:   CountingSort.c
 * Author: Aman Singh
 *
 * Created on 6 June 2021, 7:45 pm
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void printSet(int [], size_t);
void acceptSet(int [], size_t);
void counting_sort(int [], size_t);

int main() {
    int arr[SIZE] = {5, 2, 5, 3, 6, 1, 5, 3, 9, 6};
    //accept(arr,SIZE);
    printf("Elements in Array Before Sorting : \n");
    printSet(arr, SIZE);
    printf("Elements in Array After Sorting : \n");
    counting_sort(arr, SIZE);
    return (EXIT_SUCCESS);
}

void acceptSet(int arr[], size_t size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the value of %i element : ", i + 1);
        scanf("%i", &arr[i]);
    }
    return;
}

void printSet(int arr[], size_t size) {
    for (int i = 0; i < size; i++) {
        printf("%i ,", arr[i]);
    }
    printf("\n");
}

//Function Implementing the Counting Sort

void counting_sort(int arr[], size_t size) {

    //Step 1: Finding the maximum element
    int maximum = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    //Step 2: Initialize a count array of length = (maximum+1)
    int count[maximum + 1];
    for (int i = 0; i <= maximum; i++) {
        count[i] = 0;
    }

    //Step 3: Set the count array accordingly
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    //Step 4: Calculate cumulative frequency in Count Array
    for (int i = 1; i <= maximum; i++) {
        count[i] += count[i - 1];
    }

    //Step 5: Fixed the values in the sorted array
    int sorted_arr[size];

    for (int i = 0; i < size; i++) {
        sorted_arr[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    printSet(sorted_arr, SIZE);
}