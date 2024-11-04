#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int l, int h) {
    int pivot = arr[h]; 
    int i = (l - 1); 
    for (int j = l; j < h; j++) {
        if (arr[j] < pivot) { 
            i++;
        }
    }
    swap(&arr[i + 1], &arr[h]); 
    return (i + 1);
}
void quicksort(int arr[], int l, int h) {
    if (l < h) {
        int pi = partition(arr, l, h); 
        quicksort(arr, l, pi - 1); 
        quicksort(arr, pi + 1, h); 
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);
    quicksort(arr, 0, n - 1);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}
