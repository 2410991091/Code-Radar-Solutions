// Your code here...
#include <stdio.h>

// Function to reverse a subarray from index 'start' to 'end'
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array by 'k' positions
void rotate(int arr[], int n, int k) {
    k = k % n; // To handle cases when k > n
    reverse(arr, 0, n - 1);  // Reverse the whole array
    reverse(arr, 0, k - 1);  // Reverse first k elements
    reverse(arr, k, n - 1);  // Reverse the remaining elements
}

int main() {
    int n, k;
    scanf("%d", &n); // Read size of the array
    int arr[n]; 
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    scanf("%d", &k); // Read rotation count

    rotate(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]); // Print rotated array
    }

    return 0;
}
