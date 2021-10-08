#include <stdio.h>

int main(void) {
    int n, i = 0, j = 1;
    scanf("%d", &n);

    while (i < n) {
        while (j < n)
        {
            printf("%s", "#");
            j++;
        }
        j = 1;
        printf("%s", "#");
        printf("%s", "\n");
        i++;
    }
    printf("%s", "\n");
    
    return 0;
}