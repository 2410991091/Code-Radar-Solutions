#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);  // Fix: use &n to pass the address of n
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i+n-1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

