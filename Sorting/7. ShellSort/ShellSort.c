#include <stdlib.h>
#include <stdio.h>

#define SIZE 9
void printSet(int [], size_t);
void shellSort(int [], size_t, size_t);
void swap(int [], size_t, size_t);

int main() {
    printf("********* Shell Sort *********");
    int arr[SIZE] = {9, 15, 6, 3, 8, 4, 12, 2, 5};
    size_t shell;
    if (SIZE % 2 == 0) {
        shell = SIZE / 2;
    } else {
        shell = (SIZE / 2) + 1;
    }
    printf("Elements in the array Before sorting\n");
    printSet(arr, SIZE);
    shellSort(arr, shell, SIZE);
    printf("Elements in the array After sorting\n");
    printSet(arr, SIZE);
    return EXIT_SUCCESS;
}

void printSet(int arr[], size_t size) {
    for (int i = 0; i < size; i++) {
        printf("%i ,", arr[i]);
    }
    printf("\n");
}

//Non recursive Shell Sort
void shellSort(int arr[], size_t shell, size_t size) {
    while (shell != 0) {
        for (int i = 0; i + shell < size; i++) {
            if (arr[i] > arr[i + shell]) {
                swap(arr, i, i + shell);
            }
        }
        shell--;
    }
}

void swap(int arr[], size_t i, size_t j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}