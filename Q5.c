#include <stdio.h>

int main(void) {
    int Age, Looks, Income, Gov;
    printf("%s","年齡:");
    scanf("%d", &Age);

    if (Age <= 30) {
        printf("%s", "長相 (0: 醜, 1: 帥, 2: 中等): ");
        scanf("%d", &Looks);

        if(Looks == 1 | Looks == 2) {
            printf("%s", "收入 (0: 低, 1: 中, 2: 高): ");
            scanf("%d", &Income);

            if(Income == 2) {
                printf("%s", "見\n");
            }
            else if (Income == 1) {
                printf("%s", "是否為公務員  (0: 否, 1: 是): ");
                scanf("%d", &Gov);

                if(Gov == 1) {
                    printf("見\n");
                }
                else {
                    printf("%s", "不見\n");
                }
            }
            else {
                printf("%s", "不見\n");
            }              
        }
        else {
            printf("%s", "不見\n");
        }
    }
    else {
        printf("%s", "不見\n");
    }

    return 0;
    
}