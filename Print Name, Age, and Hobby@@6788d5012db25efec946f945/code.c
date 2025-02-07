#include <stdio.h>
int main(){
    char s1[100];
    int a;
    char s3[100];
    scanf("Name: %s\n",&s1);
    scanf("Age: %d\n",&a);
    scanf("Hobby: %c\n",&s3);
    printf("%s %d %s",s1,a,s3);
}