#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    scanf("%d", &n);
    m = 0;

    if (n > 0) {
        while (m < n){
        m++;
        printf("%s", "*");        
        }
    }
    else {
        printf("Wrong input");
    }
    printf("\n");

    return 0;
}