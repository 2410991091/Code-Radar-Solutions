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
    int smax=INT_MIN;
     for(int i=0;i<N;i++){
        if(smax<arr[i]){
            max=smax;
            max=arr[i];
        }
    }
     
    printf("%d",smax);


}