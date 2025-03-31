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
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding the maximum element
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    // Counting occurrences of max
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            count++;
        }
    }

    // Printing max if it appears more than once
    if (count > 1) {
        printf("%d", max);
    }

    return 0;
}



