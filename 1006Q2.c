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
                if (n % i != 0 && i != n) {
                    count ++;
                    i += 2;
                }
                else if (n % i == 0 && i != n) {
                    yes = 0;
                    break;
                }
                else if (n % i == 0 && i == n) {
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