// Your code here...
#include<stdio.h>
int fibonacciSeries(int n){
      if(n==0)return 0;
      if(n==1)return 1;
      int fibnm1=fibonacciSeries(n-1);
      int fibnm2=fibonacciSeries(n-2);
      int fibn=fibonacciSeries(n-1)+fibonacciSeries(n-2);
      printf("%d ",fibn);
      return;
}


int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
}