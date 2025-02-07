#include <stdio.h>
int main(){
    char s1[100];
    int s2;
    char s3[100];
    scanf("Name: %s\n",&s1);
    scanf("Age: %d\n",&s2);
    scanf("Hobby: %c\n",&s3);
    printf("%s %d %s",s1,s2,s3);
}