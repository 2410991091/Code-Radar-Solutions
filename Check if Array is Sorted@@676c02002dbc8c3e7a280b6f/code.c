// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[j+1]){
                printf("Sorted");
            }
            else{
                printf("Not Sorted");
            }
        }
    }
}