// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n]; // Assuming C99 or later

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking if the array is sorted
    for (int i = 0; i < n ; i++) {
        if (arr[i] > arr[i + 1]) {
            printf("Not Sorted");
            return 0;
        }
    }

    printf("Sorted");
    return 0;
}
