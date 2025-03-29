// Your code here...
#include <stdio.h>

int fibonacciSeries(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    printf("Fibonacci series up to %d terms: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacciSeries(i));
    }
    printf("\n");

    return 0;
}