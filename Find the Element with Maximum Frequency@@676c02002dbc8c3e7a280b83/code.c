// Your code here...
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int max=INT_MIN;
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d ", &arr[i]);
//     }
//     for(int i=0;i<n;i++){
//        if(max<arr[i]){
//         max=arr[i];
//        }
//     }   
//     for(int i=0;i<n-1;i++){
//         if(arr[i]==arr[i+1] && arr[i] ==max){
//             printf("%d",arr[i]);
//         }
//     }
// }



#include <stdio.h>
#include <limits.h>

int main() {
    int max = INT_MIN;
    int n;

    // Taking input for array size
    scanf("%d", &n);

    int arr[n];

    // Taking input for array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Removed extra space
    }

    // Finding the maximum element
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Checking for consecutive max values
    for (int i = 0; i < n - 1; i++) {  // Avoid out-of-bounds error
        if (arr[i] == arr[i + 1] && arr[i] == max) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
