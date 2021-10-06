#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a <= b && b <= c) {
        if(a + b > c && b + c > a && c + a > b) {
            printf("%s", "True\n");
        }
        else {
            printf("%s", "False\n");
        }
    }
    else {
        printf("%s", "False\n");
    }

    return 0;
}