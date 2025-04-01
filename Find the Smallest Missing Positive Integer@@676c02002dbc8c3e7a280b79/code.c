// Your code here...
#include <stdio.h>

int findSmallestMissingPositive(int arr[], int n) {
    int present[n + 1]; // To mark presence of numbers from 1 to n
    for (int i = 0; i <= n; i++) {
        present[i] = 0; // Initialize all as not present
    }

    // Mark numbers that are in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = 1;
        }
    }

    // Find the first missing positive integer
    for (int i = 1; i <= n; i++) {
        if (present[i] == 0) {
            return i;
        }
    }

    // If all numbers from 1 to n are present, return n+1
    return n + 1;
}

int main() {
    int n;
    scanf("%d", &n); // Read size of array
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the smallest missing positive integer
    printf("%d\n", findSmallestMissingPositive(arr, n));

    return 0;
}
