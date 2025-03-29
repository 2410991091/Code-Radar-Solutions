// Your code here...
// #include<stdio.h>
// #include<limits.h>

// int main(){
//     int N;
//     scanf("%d",&N);
//     int arr[N];
//     for(int i=0;i<N;i++){
//         scanf("%d ",&arr[i]);
//     }
//     int min=INT_MAX;
//     for(int i=0;i<N;i++){
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
   
//     int fre=0;
//     int check=0;
//     int a;
//     for(int i=0;i<N;i++){
//         for(int j=i+1;j<N;j++){
//             if(arr[i]==arr[j]){
//                 fre++;
//                 a=arr[i];
//                 check=1;
//             }
//         }
//     }
//     if(check==1){
//         printf("%d",a);
//     }
//     else{
//         printf("%d",min);
//     }


// }



#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    // Read input
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0;
    int result = INT_MAX;

    // Find frequency of each element
    for (int i = 0; i < N; i++) {
        int count = 1; // Start with 1 since the number is already present
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Check if this element has the highest frequency
        if (count > maxFreq || (count == maxFreq && arr[i] < result)) {
            maxFreq = count;
            result = arr[i];
        }
    }

    printf("%d", result);
    return 0;
}
