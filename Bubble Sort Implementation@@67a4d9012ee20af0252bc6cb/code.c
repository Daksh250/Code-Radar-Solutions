// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    // Outer loop: Iterate through the array n-1 times
    for (i = 0; i < n - 1; i++) {
        // Inner loop: Compare adjacent elements
        for (j = 0; j < n - 1 - i; j++) {
            // If the current element is greater than the next, swap them
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;

    // Read the number of elements
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the bubbleSort function to sort the array
    bubbleSort(arr, n);

    // Print the sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Add a newline at the end

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}