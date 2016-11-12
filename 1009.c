#include <stdio.h>

int main(void)

{
  char name[10];
  double salary,sales;

  scanf("%s",&name);
  scanf("%lf",&salary);
  scanf("%lf",&sales);

  printf("TOTAL = R$ %.2f", ((sales*15)/100)+salary);


  return 0;



}
