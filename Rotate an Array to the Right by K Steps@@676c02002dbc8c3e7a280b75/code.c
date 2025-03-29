// Your code here...
#include<stdio.h>
void reverse(int arr[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    K=K%N;
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    reverse(arr,0,N-1);
    reverse(arr,0,K-1);
    reverse(arr,K,N-1);
     for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    
}