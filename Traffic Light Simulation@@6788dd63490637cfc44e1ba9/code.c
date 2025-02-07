#include <stdio.h>
int main(){
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    if(a=='R'||b=='R'||c=='R'){
        printf("Stop");
    }
    else if(a=='G'||b=='G'||c=='G'){
        printf("Go");
    }
    else if(a=='Y'||b=='Y'||c=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
}