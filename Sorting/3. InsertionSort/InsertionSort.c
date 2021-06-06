/* 
 * File:   InsertionSort.c
 * Author: Aman Singh
 *
 * Created on 6 June 2021, 7:31 pm
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void printArray(int [], size_t);
void acceptSet(int [], size_t);
void insertion_sort(int [], size_t);

int main() {
    int arr[SIZE] = {12, 34, 56, 78, 3, 2, 1, 4, 5, 9};
    //acceptSet(arr, SIZE);
    printf("Elements in Array Before Sorting : \n");
    printArray(arr, SIZE);
    insertion_sort(arr, SIZE);
    printf("Elements in Array After Sorting : \n");
    printArray(arr, SIZE);
    return (EXIT_SUCCESS);
}

void printArray(int arr[], size_t size) {
    for (int i = 0; i < size; i++) {
        printf("%i ,", arr[i]);
    }
    printf("\n");
}

void acceptSet(int arr[], size_t size) {
    printf("Please Enter %zu Integers \n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter %i element :", i + 1);
        scanf("%i", &arr[i]);
    }
}

void insertion_sort(int arr[], size_t size) {
    int position = 0;
    int currentvalue = 0;
    int index = 0;
    for (index = 1; index < size; index++) {
        currentvalue = arr[index];
        position = index;
        while (position > 0 && (arr[position - 1] > currentvalue)) {
            arr[position] = arr[position - 1];
            position = position - 1;
        }
        arr[position] = currentvalue;
    }
}
