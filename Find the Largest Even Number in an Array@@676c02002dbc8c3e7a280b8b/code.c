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
    int check=0;
    for(int i=0;i<N;i++){
       if(arr[i]%2==0 && max<arr[i]){
            max=arr[i];
            check=1;
       }
    }
    if(check==0)printf("%d",-1);
    else{
        printf("%d",max);
    }



}