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
    int check=0;
    for(int i=0;i<N;i++){
        if(arr[i]==target){
            printf("%d",i);
            int check=1;
            break;
        }
       
    }
    if(check==0){
        printf("%d",-1);
    }

}