#include <stdio.h>

int main()

{
    double a,b,c,d,e,f,g,h,i,j,k;
    scanf("%lf",&a);

    if(a>=0.00 && a<=2000.00){

        printf("Isento\n");
    }else if(a>=2000.01 && a<=3000.00){

        b = a-2000.00;


    printf("R$ %.2lf\n",(b*8)/100);

    }else if(a>=3000.01 && a<=4500.00){

      b = a -2000.00;
      c = b - 1000.00;
      e = (c*18)/100;
      d = 1000;
      f = (d*8)/100;
      printf("R$ %.2lf\n",e+f);

    }else if(a>=4500.01){

    g = a- 4500.00;
    d = (1000*8)/100;
    c = (1500*18)/100;
    h = (g*28)/100;

    printf("R$ %.2lf\n",d+c+h);


    }





}
