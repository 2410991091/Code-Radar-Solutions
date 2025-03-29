// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array

    int arr[n];  // Declare an array of size n

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int median;
      for (int i = 0; i < n; i++) {
    if(i%2!=0){
        median=arr[n/2+1];
       
    }
    else{
        median=arr([n/2]+[n/2+1]);
    }
    printf("%d",median);
    }
}