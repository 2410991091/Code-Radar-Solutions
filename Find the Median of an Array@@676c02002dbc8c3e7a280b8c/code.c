// Your code here...
// #include<stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);  // Read the size of the array

//     int arr[n];  // Declare an array of size n

//     // Read the array elements
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int median;
//       for (int i = 0; i < n; i++) {
//     if(i%2!=0){
//         median=arr[n/2+1];
       
//     }
//     else{
//         median=arr([n/2]+[n/2+1]);
//     }
//     printf("%d",median);
//     }
// }



void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    int arr[n]; // Declare an array of size n

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    sortArray(arr, n);

    double median;
    if (n % 2 != 0) {
        median = arr[n / 2];
    } else {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }

    printf("Median: %.2f\n", median);
    return 0;
}
