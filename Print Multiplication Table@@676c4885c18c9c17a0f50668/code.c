// Your code here...
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     // int i;
//     for(int i=1;i<=10;i++){
//         printf("%d X %d = %d",n,i,n*i);
//     }
//     printf("\n");
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);  // Added '\n' for proper formatting
    }

    return 0;  // Good practice to return 0 in main()
}
