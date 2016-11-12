#include <stdio.h>

int main(void)

{

  int X,Y;


  scanf("%d %d",&X,&Y);

  switch(X){

    case 1:
    printf("Total: R$ %.2lf\n",(4*(double)Y));
    break;

    case 2:
    printf("Total: R$ %.2lf\n",(4.50*(double)Y));
    break;

    case 3:
    printf("Total: R$ %.2lf\n",(5.00*(double)Y));
    break;

    case 4:
    printf("Total: R$ %.2lf\n",(2.00*(double)Y));
    break;

    case 5:
    printf("Total: R$ %.2lf\n",(1.50*(double)Y));
    break;


}

  return 0;

}
