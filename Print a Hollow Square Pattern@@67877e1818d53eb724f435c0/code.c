// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            printf("*");
        }
        if(N/2+1==i%2==0)printf(" ");
        else{
            printf("*");
        }
        printf("\n");
    }
}