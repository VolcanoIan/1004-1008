#include <stdio.h>

int main(void) {
    int n, i = 1, j =1;
    scanf("%d", &n);

    while (i <= n) {
        while (j <= n)
        {
            printf("%s", "#");
            j++;
        }
        printf("%s", "#");
        i++;
    }
    printf("%s", "\n");
    
    return 0;
}