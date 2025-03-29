// Your code here...
void fibonacciSeries(int n){
    {
    if (n <= 1)  // Base cases
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}
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