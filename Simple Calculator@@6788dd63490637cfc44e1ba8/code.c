#include <stdio.h>

int main() {
    int a, b;
    char o;
    scanf("%d %d %c", &a, &b, &o);

    if (o == '+') {
        printf("%d\n", a + b);
    } else if (o == '-') {
        printf("%d\n", a - b);
    } else if (o == '*') {
        printf("%d\n", a * b);
    } else if (o == '/') {
        if (b == 0) {
            printf("Error: Division by zero\n");
        } else {
            printf("%d\n", a / b);
        }
    } else {
        printf("Invalid operator\n");
    }

}