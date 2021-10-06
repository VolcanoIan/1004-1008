#include <stdio.h>

int main(void) {
    int year, n;
    scanf("%d", &year);
    n = year % 4;

    if ((year % 4 == 0) && (year % 100 != 0)) {
        printf("%s", "閏年\n");
    }
    else if ((year % 4 == 0) && (year % 100 == 0)) {
        if (year % 400 != 0) {
            printf("平年\n");
            printf("離 %d 最近的閏年是 %d 年或 %d 年\n", year, (year - 4), (year + 4));
        }
        else {
            printf("閏年\n");
        }
    }
    else {
        if (n == 1) {
            printf("平年\n");
            if ((year - 1) % 100 != 0) {
                printf("離 %d 最近的閏年是 %d 年\n", year, (year - 1));
            }
            else {
                printf("離 %d 最近的閏年是 %d 年\n", year, (year + 3));
            }
        }
        else if(n == 3) {
            printf("平年\n");
            if ((year + 1) % 100 != 0) {
                printf("離 %d 最近的閏年是 %d 年\n", year, (year + 1));
            }
            else {
                printf("離 %d 最近的閏年是 %d 年\n", year, (year - 3));
            }
        }
        else if (n == 2) {
            printf("平年\n");
            if ((year + 2) % 100 == 0 || (year - 2) % 100 == 0) {
                if ((year + 2) % 100 == 0) {
                    printf("離 %d 年最近的閏年是 %d 年\n", year, year - 2);
                }
                else if ((year - 2) % 100 == 0) {
                    printf("離 %d 年最近的閏年是 %d 年\n", year, year + 2);
                }
            }
            else {
                printf("離 %d 最近的閏年是 %d 年或 %d 年\n", year, (year - 2), (year + 2));
            }
        }
    }
}