// Your code here...
#include<stdio.h>
//#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int max=-20;
    int smax=-20;
    for(int i=0;i<N;i++){
        if(max<arr[i]){
        smax=max;
        max=arr[i];}
    }
    printf("%d",smax);
}


