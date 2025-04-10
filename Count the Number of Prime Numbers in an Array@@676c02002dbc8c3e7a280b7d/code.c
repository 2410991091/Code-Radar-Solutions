// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int count=0;
    int a=0;
    for(int i=0;i<n;i++){
        if(arr[i]%i==0){
            a=1;
        }
    }
    if(a==0){
        count++;
    }
    printf("%d",count);

}