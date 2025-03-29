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
        if(arr[i]==0){
            int temp=arr[i];
            arr[i]=arr[N-1];
            arr[N-1]=temp;

        }
    }
     for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
}