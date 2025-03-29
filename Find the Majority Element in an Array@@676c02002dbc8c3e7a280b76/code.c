// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int a=-1;
    int majority=0;
    int check=0;
    for(int i=0;i<N;i++){
        if(arr[i]=arr[i+1]){
            majority++;
            check=1;
            break;
        }
    }
    if(check==1)printf("%d",arr[i]);
    else{
        printf("%d",a);
    }
}