#include <stdio.h>
#include <math.h>
#define TAX 10.0


int main () {
  int category,count = 0;
  float base_price = 0.0;

  printf("区分を入力してください。(1:子ども、2:大人):\n");
  scanf("%d",&category);
  
  printf("人数を入力してください。:\n");
  scanf("%d",&count);

  if(category == 1){
    base_price = count * 800;
  } else if(category == 2) {
    base_price = count * 1500;
  } else {
    printf("1と2以外の区分が入力されました。\n");
  }

  printf("金額(税抜)は%.0f円で\n",base_price);

  base_price = round(base_price * (1 + TAX / 100.0));

  printf("税込価格は%.0f円です\n",base_price);
}