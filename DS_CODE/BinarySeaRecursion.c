// 15. Implement Binary Search using Recursion.
#include <stdio.h>

// Recursive Binary Search Function
int binarySearch(int arr[], int start, int end, int key)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;

        // If element is found
        if (arr[mid] == key)
            return mid;

        // If element is smaller, search left half
        if (key < arr[mid])
            return binarySearch(arr, start, mid - 1, key);

        // Otherwise search right half
        return binarySearch(arr, mid + 1, end, key);
    }

    return -1; // Element not found
}

int main()
{
    int arr[] = {2,4,6,8,23,45,67,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key, i, result;


    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    if(result != -1)
        printf("Element found at index %d", result);
    else
        printf("Element not found");

    return 0;
}
