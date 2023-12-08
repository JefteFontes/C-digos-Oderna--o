#include <stdio.h>

void selectionSort(int arr[], int n);
void showArray(int arr[], int n);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("Array original: ");
    showArray(array, n);
    
    selectionSort(array, n);

    printf("\n\nArray ordenado: ");
    showArray(array, n);

    return 0;
}

void showArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    int troca_count = 0; 

    for (i = 0; i < n - 1; i++) {
        printf("\nPasso %d: \n", i + 1);
        min_idx = i;

        for (j = i + 1; j < n; j++) {
            printf("[%d -> %d] ", arr[min_idx], arr[j]);
            
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
                printf("Trocou\n");
                troca_count++;
            } else {
                printf("Nao trocou\n");
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;

        showArray(arr, n);
        printf("Menor elemento: %d\n", arr[i]);
    }

    printf("\nTotal de trocas realizadas: %d\n", troca_count);
}
