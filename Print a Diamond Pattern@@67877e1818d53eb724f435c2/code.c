// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);
//     int ml=N/2+1;
//     int nst=1;
//     int nsp=N/2;
//     for(int i=1;i<=2*N-1;i++){
//         for(int j=1;j<=nsp;j++){
//             printf(" ");
//         }
//         for(int j=1;j<=nst;j++){
//             printf("*");
//         }
//         if(i<ml){
//             nst+=2;
//             nsp--;
//         }
//         else{
//             nst-=2;
//             nsp++;
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int ml = (N + 1) / 2; // Calculate mid line
    int nst = 1; // Number of stars
    int nsp = N / 2; // Number of spaces

    for (int i = 1; i <= 2 * N - 1; i++) {
        // Print spaces
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= nst; j++) {
            printf("*");
        }
        if (i < ml) {
            nst += 2;
            nsp--;
        } else {
            nst -= 2;
            nsp++;
        }
        printf("\n");
    }
    return 0;
}