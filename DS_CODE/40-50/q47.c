#include <stdio.h>

#define MAX 100

void merge(int arr[], int left, int mid, int right) {
    int temp[MAX];
    int i = left, j = mid + 1, k = left;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];
}

void mergeSort(int arr[], int n) {
    int size, left, mid, right;

    for (size = 1; size < n; size = size * 2) {
        for (left = 0; left < n - 1; left += 2 * size) {
            mid = left + size - 1;
            right = left + 2 * size - 1;

            if (mid >= n - 1)
                continue;

            if (right >= n)
                right = n - 1;

            merge(arr, left, mid, right);
        }
    }
}

int main() {
    int arr[MAX], n, i;
    printf("Question: 47\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}