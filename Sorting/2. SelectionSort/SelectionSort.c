/* 
 * File:   SelectionSort.c
 * Author: Aman Singh
 *
 * Created on 21 April 2021, 9:48 am
 */

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_ELEMENTS 5

void acceptSet(int [], size_t);
void printSet(int [], size_t);
void selectionSort(int [], size_t);
void swap(int [], int, int);

int main() {

    int a[NUMBER_OF_ELEMENTS];
    acceptSet(a, NUMBER_OF_ELEMENTS);
    printf("Elements in the Array Before Sorting :");
    printSet(a, NUMBER_OF_ELEMENTS);

    selectionSort(a, NUMBER_OF_ELEMENTS);
    printf("Elements in the Array After Sorting :");
    printSet(a, NUMBER_OF_ELEMENTS);

    return (EXIT_SUCCESS);
}

void acceptSet(int arr[], size_t size) {
    printf("Please enter %zi Integers\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter %i element : ", i + 1);
        scanf("%i", &arr[i]);
    }
}

void printSet(int arr[], size_t size) {
    for (int i = 0; i < size; i++) {
        printf("%i ,", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], size_t size) {
    int i;
    int minIndex;
    for (i = 0; i < (size - 1); i++) {
        minIndex = i;
        for (int j = (i + 1); j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr, i, minIndex);
    }
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}