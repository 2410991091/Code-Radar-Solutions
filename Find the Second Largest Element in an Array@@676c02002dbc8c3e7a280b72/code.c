// Your code here...
#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int max=INT_MIN;
    for(int i=0;i<N;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
      int smax=INT_MIN;
    for(int i=0;i<N;i++){
        if(max!=arr[i]&&arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
}