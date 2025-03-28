// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<N;i++){
        if(arr[i]%2==0 && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
        }
        else{
            printf("%d",-1);
        }
    }
}