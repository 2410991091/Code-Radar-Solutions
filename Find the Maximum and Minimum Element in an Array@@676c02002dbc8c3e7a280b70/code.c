// Your code here...

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d ",arr[i]);
    int max=INT_MIN;
    int min=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<max){
            arr[i]=max;
            printf("%d ",arr[i]);
        }

    }
     for(int i=0;i<n;i++){
        if(arr[i]>min){
            arr[i]=min;
            printf("%d ",arr[i]);
        }

    }



}