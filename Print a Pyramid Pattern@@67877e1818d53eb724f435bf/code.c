// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int nsp=2;
    int nst=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=nsp;j++){
        printf(" ");}
        for(int k=1;k<=nst;k++){
            printf("*");
        }
    }
    nsp=nsp-2;
    nst=nst+2;
    printf("\n");
}