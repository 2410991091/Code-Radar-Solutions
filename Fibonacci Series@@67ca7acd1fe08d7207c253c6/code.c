// // Your code here...
// #include <stdio.h>
// int fibonacciSeries(int n){
//     if(n==0 || n==1){
//         if(n==0) return 0;
//         else return 1;
//     }
//     return fibonacciSeries(n-1)+fibonacciSeries(n-2);
// }


// int main() {
//     int n;
//     scanf("%d", &n);
    
//     if (n <= 0) {
//         printf("Invalid input\n");
//         return 0;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ", fibonacciSeries(i));
//     }
//     return 0;
// }


#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, temp;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
   // printf("\n"); // Formatting improvement
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    //printf("Fibonacci Series: ");
    fibonacciSeries(n);

    return 0;
}
