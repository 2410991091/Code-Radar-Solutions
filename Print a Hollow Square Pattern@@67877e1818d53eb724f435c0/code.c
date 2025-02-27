// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++){
        // For the first and last row, print N stars
        if(i == 1 || i == N) {
            for(int j = 1; j <= N; j++){
                printf("*");
            }
        }
        // For the middle row, print stars at the ends and a space in the middle
        else {
            for(int j = 1; j <= N; j++){
                if(j == 1 || j == N) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}
