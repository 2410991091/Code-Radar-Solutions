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
    int a=-1;
    int idx;
    int check=0;
    for(int i=0;i<N;i++){
        if(arr[i]==target){
            idx=i;
            check=1;
            break;
        }
    }
    if(check==0)printf("%d",a);
    else{
        printf("%d",idx);
    }


}
