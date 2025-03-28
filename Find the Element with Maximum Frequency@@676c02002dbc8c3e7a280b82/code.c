// Your code here...
#include<stdio.h>
#include<limits.h>
int max=INT_MIN;
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]==arr[i+1]&&max<arr[i]){
            max=arr[i];
            count++;
        }
    }
    if(count>1)printf("%d",max);
}