// Your code here...
#include<stdio.h>
#include<limits.h>
int min=INT_MIN;
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<N;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int fre=0;
    int check=0;
    int a;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]=arr[j]){
                fre++;
                a=arr[i];
                check=1;
            }
        }
    }
    if(check==1){
        printf("%d",a);
    }
    else{
        printf("%d",min);
    }


}