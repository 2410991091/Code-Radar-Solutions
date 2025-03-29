// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int check=0;
    for(int i=0;i<N;i++){
        if(arr[i]==target){
            printf("%d",i);
            break;
        }
        else{
            printf("%d",-1);
            break;
        }
    }

}
