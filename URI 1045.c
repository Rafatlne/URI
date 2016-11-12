#include <stdio.h>

int main() {


double x,y,z,A,B,C;

  scanf("%lf %lf %lf",&x,&y,&z);

  if(x>=y && x>=z){

   A=x;

   if(y>=z){

    B=y;C=z;

   }else{

    B=z;C=y;

   }


  }else if(y>=z && y>=x){

    A=y;

    if(x>=z){

    B=x;C=z;

    }else{

    C=x;B=z;

    }


    }else if(z>=y && z>=x){

    A=z;

    if(y>=x){

    B=y;C=x;

    }else{

    B=x;C=y;

    }

    }

    if(A>=B+C){printf("NAO FORMA TRIANGULO\n");}
    else if((A*A)==(B*B)+(C*C)){printf("TRIANGULO RETANGULO\n");}
    else if(A*A>B*B+C*C){printf("TRIANGULO OBTUSANGULO\n");}
    else if(A*A<B*B+C*C){printf("TRIANGULO ACUTANGULO\n");}

    if(A==B && B==C && A==C){printf("TRIANGULO EQUILATERO\n");}
    else if(A==B||B==C||A==C){printf("TRIANGULO ISOSCELES\n");}


    return 0;
}
