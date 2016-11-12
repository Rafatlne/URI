#include <stdio.h>

int main()


{
  double A,B,C;
  scanf("%lf %lf %lf",&A,&B,&C);

  if(A+B>C && B+C>A && A+C>B){

   printf("Perimetro = %.1lf\n",A+B+C);

  }else{

   printf("Area = %.1lf\n",(((A+B)/2)*C));

  }

  return 0;

}
