// Your code here...
// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);
//     int arr[N];
//     for(int i=0;i<N;i++){
//         scanf("%d",&arr[i]);
//     }
//     int a=-1;
//     int majority=0;
//     int check=0;
//     for(int i=0;i<N;i++){
//         if(arr[i]==arr[i+1]){
//             majority++;
//             check=1;
//             break;
//         }
//     }
//     if(check==1)printf("%d",arr[i]);
//     else{
//         printf("%d",a);
//     }
// }


#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int a = -1; // Default value if no majority element is found
    int majority = -1; // Store majority element
    int check = 0;

    for(int i = 0; i < N-1; i++) { // Run only till N-2 to avoid out-of-bounds
        if(arr[i] == arr[i+1]) {  // Corrected comparison operator
            majority = arr[i];
            check = 1;
            break; // Stop as soon as a majority is found
        }
    }

    if(check == 1)
        printf("%d", majority);  // Print the found majority element
    else
        printf("%d", a);  // Print -1 if no majority is found

    return 0;
}
