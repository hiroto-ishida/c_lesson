#include <stdio.h>

int main(){
  int japanese,social,science = 0;
  int total,average = 0;
  
  printf("国語の点数は？");
  scanf("%d",&japanese);
  total = japanese;
  
  printf("社会の点数は？");
  scanf("%d",&social);
  total += social;
  
  printf("理科の点数は？");
  scanf("%d",&science);
  total += science;

  average = total / 3;

  printf("合計 = %d, 平均 = %d ",total,average);
}