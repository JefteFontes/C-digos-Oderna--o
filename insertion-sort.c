#include <stdio.h>

void insertionSort(int arr[], int n);
void printArray(int arr[], int size);

int main() {
    int arr[] = {12, 11, 10, 9 ,8 , 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    printArray(arr, n);
    printf("\n");

    insertionSort(arr, n);
    
    printf("\nArray ordenado: ");
    printArray(arr, n);

    return 0;
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 

        printf("\nPasso %d:\n", i);
        printf("Chave a ser inserida: %d\n", key);
        printf("Array antes da insercao: ");
        printArray(arr, n);

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1; 
        }
        arr[j + 1] = key;  

        printf("Array apos a insercao: ");
        printArray(arr, n);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
