#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int ml=N/2+1;
    int nst=1;
    int nsp=N/2;
    for(int i=1;i<=2*N-1;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        if(i<ml){
            nst+=2;
            nsp--;
        }
        else{
            nst-=2;
            nsp++;
        }
        printf("\n");
    }
}