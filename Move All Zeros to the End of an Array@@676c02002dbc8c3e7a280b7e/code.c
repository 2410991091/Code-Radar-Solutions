// // Your code here...
// #include<stdio.h>
// void swapzero(int arr[],int N){
//     int i=0;
//     int j=N-1;
//       for(int i=0;i<N;i++){
//         if(arr[i]==0){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             j--;

//         }
//         return;
//     }
// }
// int main(){
//     int N;
//     scanf("%d",&N);
//     int arr[N];
//     for(int i=0;i<N;i++){
//         scanf("%d ",&arr[i]);
//     }
//     swapzero(arr,N);
//      for(int i=0;i<N;i++){
//         printf("%d ",arr[i]);
//     }
// }

#include <stdio.h>

void moveZerosToEnd(int arr[], int N) {
    int j = 0; // Position for the next nonzero element

    for (int i = 0; i < N; i++) {
        if (arr[i] != 0) {
            // Swap nonzero element with arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, N);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


