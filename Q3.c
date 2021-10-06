#include <stdio.h>


int main( void ){
    int input1, input2, input3;
    printf("%s", "是否有房產？(0: No, 1: Yes)");
    scanf("%d", &input1);

    if (input1 == 0) {
        printf("%s", "是否已婚？(0: No, 1: Yes)");
        scanf("%d", &input2);

        if (input2 == 0) {
            printf("%s", "是否年收入 > 100萬？(0: No, 1: Yes)");
            scanf("%d", &input3);

            if (input3 == 0) {
                printf("%s", "不能貸款\n");
            }
            else {
                printf("可以貸款\n");
            }
        }
        else {
            printf("可以貸款\n");
        }
    }
    else {
        printf("可以貸款\n");
    }

    return 0;
}