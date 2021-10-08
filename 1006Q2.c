#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int n, i = 3, count = 0;
    int yes = 1;
    scanf("%d", &n);

    if (n != 1) {
        count += 1;
        if ((n % 2) == 0) {
            printf("NO, %d\n", count);
        }
        else {
            while (i <= n) {
                if (n % i != 0) {
                    count ++;
                    i += 2;
                }
                else {
                    yes = 0;
                    break;
                }
            }
            printf("%s, %d\n", yes ? "YES":"NO", count);
        }
    }
    else {
        printf("NO, %d\n", count);
    }

    return 0;
}