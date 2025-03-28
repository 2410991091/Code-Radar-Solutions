// Your code here...

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d ",&arr[i]);
    int max=INT_MIN;
    int min=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<max){
            arr[i]=max;
            
        }

    }
     for(int i=0;i<n;i++){
        if(arr[i]>min){
            arr[i]=min;
        
        }
        printf("%d ",min);
        printf("%d ",max);
    }



}



// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int n;
//     scanf("%d", &n);  // Read the size of the array

//     int arr[n];  // Declare an array of size n

//     // Read the array elements
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int max = INT_MIN; // Initialize max as smallest possible integer
//     int min = INT_MAX; // Initialize min as largest possible integer

//     // Finding the maximum value
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     // Finding the minimum value
//     for (int i = 0; i < n; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     printf("%d ", min);
//     printf("%d ", max);

//     return 0;
// }
