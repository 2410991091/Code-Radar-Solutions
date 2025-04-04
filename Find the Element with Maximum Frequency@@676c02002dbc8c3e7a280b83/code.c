// Your code here...
#include<stdio.h>
#include<limits.h>
int main(){
    int max=INT_MIN;
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    int count=0;
    for (int i = 0; i < n; i++) {
      if(max<arr[i]){
        arr[i]=max;
      }
    }

     for (int i = 0; i < n; i++) {
        (int j = i+1; j < n; j++)
      if(arr[i]==arr[j]){
        count++;
      }
    }
    for (int i = 0; i < n; i++) {
        if(arr[i]=arr[i+1] && count=max){
            printf("%d",arr[i]);
        }
    }
}


