// // Your code here...
// #include<stdio.h>
// int main(){
//     int N;
//     int target;
//     scanf("%d %d",&N,&target);
//     int arr[N];
//     for(int i=0;i<N;i++){
//         scanf("%d ",&arr[i]);
//     }
//     int check=0;
//     for(int i=0;i<N;i++){
//         if(arr[i]==target){
//             printf("%d",i);
//             break;
//         }
//         else{
//             printf("%d",-1);
//             break;
//         }
//     }

// }
#include <stdio.h>

int main() {
    int N, target;
    scanf("%d %d", &N, &target); // Read N and target value

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Read array elements correctly
    }

    int found = 0; // Flag to check if target is found

    for (int i = 0; i < N; i++) {
        if (arr[i] == target) {
            printf("%d\n", i); // Print index of first occurrence
            found = 1; // Mark that target is found
            break;
        }
    }

    if (!found) {
        printf("-1"); // Print -1 if target is not found
    }

    return 0;
}
