#include <stdio.h>

#define MAX 100

// Heapify without recursion
void heapify(int arr[], int n, int i) {
    int largest, left, right, temp;
    
    while (1) {
        largest = i;
        left = 2 * i + 1;
        right = 2 * i + 2;

        if (left < n && arr[left] > arr[largest])
            largest = left;

        if (right < n && arr[right] > arr[largest])
            largest = right;

        if (largest != i) {
            temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;

            i = largest;   // Continue downward
        } else {
            break;
        }
    }
}

// Heap Sort
void heapSort(int arr[], int n) {
    int i, temp;
    
    // Build max heap
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements one by one
    for (i = n - 1; i > 0; i--) {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

int main() {
    int arr[MAX], n, i;
    printf("Question: 50\n");
    

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    heapSort(arr, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}