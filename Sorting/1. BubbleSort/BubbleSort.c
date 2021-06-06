/* 
 * File:   BubbleSort.c
 * Author: Aman Singh
 *
 * Created on April 8, 2021, 9:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_ELEMENTS 8 

void bubbleSort(int [], size_t size);
void swap(int [], int i, int j);
void acceptSet(int [], size_t size);
void printSet(int [], size_t size);

int main() {
    int arr[NUMBER_OF_ELEMENTS];
    acceptSet(arr, NUMBER_OF_ELEMENTS);
    printf("Elements in Array Before Sorting : \n");
    printSet(arr, NUMBER_OF_ELEMENTS);
    bubbleSort(arr,NUMBER_OF_ELEMENTS);
    printf("Elements in Array After Sorting : \n");
    printSet(arr, NUMBER_OF_ELEMENTS);
    return (EXIT_SUCCESS);
}

void bubbleSort(int a[], size_t size) {
    int i;
    int j;
    for (i = 1; i < size; i++) {
        for (j = 0; j < (size - i); j++) {
            if (a[j] > a[j + 1]) {
                swap(a, j, j + 1);
            }
        }
    }
    return;
}

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    return;
}

void acceptSet(int a[], size_t size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the value of %i element : ", i + 1);
        scanf("%i", &a[i]);
    }
    return;
}

void printSet(int a[], size_t size) {
    for (int i = 0; i < size; i++) {
        printf("%i ,", a[i]);
    }
    printf("\n");
}
