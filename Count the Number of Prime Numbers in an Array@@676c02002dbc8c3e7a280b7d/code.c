// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    // Start from i = 1 to avoid division by zero
    for(int i = 1; i < n; i++) {
        if(arr[i] % i != 0) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
