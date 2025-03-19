// Your code here...
#include<stdio.h>
int N;
scanf("%d",&N);
for(int i=1;i<=N;i++){
    int a;
    for(int j=1;j<=i;j++){
        if(i%2==0){
            a=0;
        }
        else{
            a=1;
        }
        printf(%d ,a);
    }
    printf("\n");
}

