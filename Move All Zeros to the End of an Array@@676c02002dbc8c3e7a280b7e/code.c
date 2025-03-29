// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int idx;
    for(int j=N;j>1;j--){
        idx=j;
    
    }
    
     for(int i=0;i<N;i++){
        if(arr[i]==0){
           int temp=arr[i];
           int arr[i]=arr[idx];
           arr[idx]=arr[i];


        }
    }
     for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
}