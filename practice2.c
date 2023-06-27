#include <stdio.h>

int main () {

  int price,count,price_including_tax,base_price = 0;
  float tax = 1.1;
  
  printf("単価を入力してください\n");
  scanf("%d",&price);
  printf("数量を入力してください\n");
  scanf("%d",&count);

  base_price = price * count;
  price_including_tax = base_price * tax;

  printf("税抜き価格は%d円で、税込価格は%d円です",base_price,price_including_tax);

}