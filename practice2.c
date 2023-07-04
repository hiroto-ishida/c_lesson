
// 練習問題2

#include <stdio.h>
#include <math.h>

#define TAX 10

int main () {

  int price, count;
  float base_price;

  printf("単価を入力してください\n");
  scanf("%d", &price);
  printf("数量を入力してください\n");
  scanf("%d", &count);

  base_price = price * count;

  printf("税抜き価格は%.0f円で、税込価格は%.0f円です\n", base_price, round(base_price * (1 + TAX / 100.0)));

  return 0;
}