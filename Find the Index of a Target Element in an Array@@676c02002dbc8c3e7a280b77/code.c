// Your code here...
#include<stdio.h>
int main(){
    int N;
    int target;
    scanf("%d %d",&N,&target);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<N;i++){
        if(arr[i]==target){
            printf("%d",i);
        }
        else{
            printf("%d",-1);
        }
    }

}