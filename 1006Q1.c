#include <stdio.h>

int main(void) {
    int n, m, total = 1;
    scanf("%d", &n);
    m = n;

    while (m >= 1) {
        total *= m;
        m--;
    }
    printf("%d\n", total);

    return 0;
}