// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-1;j++){
            printf(" ");
        }
        for(int k=1;k<=2N-1;k++){
            printf("*");
        }
        printf("\n");
    }
}