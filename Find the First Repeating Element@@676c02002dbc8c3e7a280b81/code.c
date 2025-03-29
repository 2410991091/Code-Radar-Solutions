// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int check=0;
    int a=-1;
    int b;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                b=arr[i];
                check=1;
                goto end;
            }
        
        }
    }
    end:
    if(check==1)printf("%d",b);
    else{
        printf("%d",a);
    }
    return 0;
}