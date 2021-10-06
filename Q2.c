#include <stdio.h>

int main(void) {
    int grade;
    scanf("%d", &grade);

    if (grade >= 60 && grade <= 69) {
        if (grade >= 70 && grade <= 79){
            if (grade >= 80 && grade <= 89) {
                if (grade >= 90 && grade <= 100){
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

    return 0;
    
}