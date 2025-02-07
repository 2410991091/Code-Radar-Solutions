#include <stdio.h>
int main(){
    char s1[100],s3[100];
    int s2;
    scanf("Name: %c\n",&s1);
    scanf("Age: %d\n",&s2);
    scanf("Hobby: %c\n",&s3);
    printf("%c %d %c",s1,s2,s3);
}