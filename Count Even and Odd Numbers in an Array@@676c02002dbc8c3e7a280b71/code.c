// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int counteven=0;
    int countodd=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0)
        {
            counteven++;
        }
        else{
            countodd--;
        }
    }
    printf("%d %d",counteven,countodd);
}