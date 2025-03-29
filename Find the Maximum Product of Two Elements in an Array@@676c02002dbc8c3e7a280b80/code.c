// Your code here...
#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int pro=1;
    int max=INT_MIN;
      for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            pro=arr[i]*arr[j];
        }
        if(max<pro){
            max=pro;
        }
    }
    printf("%d",max);
}