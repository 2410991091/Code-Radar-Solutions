// Your code here...
// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);
//     int arr[N];
//     for(int i=0;i<N;i++){
//         scanf("%d ",&arr[i]);
//     }
//     int j=N-1;
    
//      for(int i=0;i<N;i++){
//         if(arr[i]==0){
//            int temp=arr[i];
//            arr[i]=arr[j];
//            arr[j]=arr[i];
//            j--;


//         }
//     }
//      for(int i=0;i<N;i++){
//         printf("%d ",arr[i]);
//     }
// }



#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Removed extra space
    }

    int j = N - 1; // Last position

    for (int i = 0; i < j; i++) {
        if (arr[i] == 0) {
            // Swap zero with last non-zero element
            while (arr[j] == 0 && j > i) { // Ensure j doesn't go past i
                j--;
            }
            if (j > i) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j--; // Move index leftward
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
