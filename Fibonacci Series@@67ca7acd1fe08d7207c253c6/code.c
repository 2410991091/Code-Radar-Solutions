// Your code here...
int fibonacciSeries(int n){
      if(n==0)return 0;
      if(n==1)return 1;
      int fibnm1=fib(n-1);
      int fibnm2=fib(n-2);
      int fibn=fib(n-1)+fib(n-2);
      printf("%d ",fibn);
      return;
}

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
}