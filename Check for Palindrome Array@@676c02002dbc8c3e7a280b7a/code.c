// Your code here...
#include<stdio.h>
void reverse(int arr[],int N){
    int i=0;
    int j=N-1;
    while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
    if(arr[N]=reverse(arr,N)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",arr[i]);
    }
    reverse(arr,N);
    
}