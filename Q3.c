#include <stdio.h>


int main( void ){
    int input1, input2, input3;
    scanf("%d", &input1);

    if (input1 == 1)
    {
        printf("%s", "可以貸款\n");
    }
    else {
        scanf("%d", &input2);

        if(input2 == 1){
            printf("%s", "可以貸款\n");
        }
        else {
            scanf("%d", &input3);

            if(input3 == 1){
                printf("%s", "可以貸款\n");
            }
            else {
                printf("%s", "不能貸款\n");
            }
        }
    }

    return 0;
}