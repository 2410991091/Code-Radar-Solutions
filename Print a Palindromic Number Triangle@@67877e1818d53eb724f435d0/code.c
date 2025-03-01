// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        int a=i-1;
        for(int k=1;k<=i-1;k++){
            printf("%d",a);
        }
        printf("\n");
    }
}