// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int check=0;
    int a=-1;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                check=1;
            }
        
        }
    }
    if(check==1)printf("%d",arr[i]);
    else{
        printf("%d",a);
    }
}