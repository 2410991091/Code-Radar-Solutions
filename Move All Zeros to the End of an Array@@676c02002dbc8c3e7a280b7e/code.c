// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int j=N-1;
    
     for(int i=0;i<N;i++){
        if(arr[i]==0){
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=arr[i];
           j--;


        }
    }
     for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
}