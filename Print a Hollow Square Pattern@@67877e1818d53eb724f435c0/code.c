// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            printf("*");
        }
        int m;
        if(m==N/2+1)printf(" ");
        else{
            printf("*");
        }
        printf("\n");
    }
}