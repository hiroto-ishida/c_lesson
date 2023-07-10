#include <stdio.h>
#include <math.h>

#define TAX 10.0
#define DIV_CHILD 1
#define DIV_ADULT 2
#define PRICE_CHILD 800
#define PRICE_ADULT 1500

int main(void)
{
  int division = 0;
  int count = 0;
  int price = 0;
  
  printf("区分を入力してください。(1:子ども、2:大人):\n");
  scanf("%d", &division);

  printf("人数を入力してください。:\n");
  scanf("%d", &count);

  if(division == DIV_CHILD)
  {
    price = count * PRICE_CHILD;
  }
  else if (division == DIV_ADULT)
  {
    price = count * PRICE_ADULT;
  }
  else
  {
    printf("1と2以外の区分が入力されました。\n");
  }

  printf("金額(税抜)は%d円で\n", price);

  price = round(price * (1 + TAX / 100.0));

  printf("税込価格は%d円です\n", price);


  return 0;
}