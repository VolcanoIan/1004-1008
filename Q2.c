#include <stdio.h>

int main(void) {
    int grade;
    scanf("%d", &grade);

    if(grade >= 0) {
        if(grade >= 60) {
            if(grade >= 70) {
                if(grade >= 80) {
                    if(grade >= 90 && grade <= 100) {
                        printf("%s", "A\n");
                    }
                    else {
                        printf("%s", "B\n");
                    }
                }
                else {
                    printf("%s", "C\n");
                }
            }
            else {
                printf("%s", "D\n");
            }
        }
        else {
            printf("%s", "F\n");
        }
    }

    return 0;

}