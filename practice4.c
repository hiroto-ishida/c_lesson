#include <stdio.h>
#include <math.h>

#define TAX 10.0
#define PRICE_INFANT 200
#define PRICE_ELEMENTARY 500
#define PRICE_JUNIOR 1000
#define TRUE 1
#define FALSE 0

int main(void) {
    int division = 0;
    int count = 0;
    int total = 0;
    int flag = TRUE;

    while (flag == 1) {
        while (TRUE) {
            printf("区分を入力してください。(1:小学生未満、2:小学生、3:中学生以上):\n");
            scanf("%d", &division);

            if (division < 1 || division > 3) {
                printf("1から3の区分を入力してください。\n");
            } else {
                break;
            }
        }

        printf("人数を入力してください。:\n");
        scanf("%d", &count);

        switch (division) {
            case 1:
                total += count * PRICE_INFANT;
                break;
            case 2:
                total += count * PRICE_ELEMENTARY;
                break;
            case 3:
                total += count * PRICE_JUNIOR;
                break;
        }

        printf("続けて入力しますか？ (1:続ける, 0:終了):\n");
        scanf("%d", &flag);
    }

    total = round(total * (1 + TAX / 100.0));

    printf("合計金額（税込）は%d円です。\n", total);

    return 0;
}
