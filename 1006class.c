#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void) {
    int n, m;
    scanf("%d", &n);
    m = 0;

    while (m < n){
        m++;
        printf("%s", "*");        
    }
    printf("\n");
    
    return 0;
}