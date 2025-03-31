// Loading Code...#include <stdio.h>
#include <stdio.h>
// Function to check if an array is a palindrome
int isPalindrome(int arr[], int N) {
    int i = 0, j = N - 1;
    
    while (i < j) {
        if (arr[i] != arr[j]) {
            return 0; // Not a palindrome
        }
        i++;
        j--;
    }
    
    return 1; // Palindrome
}

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Fix: Use &arr[i]
    }

    if (isPalindrome(arr, N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
