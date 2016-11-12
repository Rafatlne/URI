#include <stdio.h>
#include <math.h>

int main()

{
   float A,B,C,R1,R2;

   scanf("%f %f %f",&A,&B,&C);

   R1 = (-B + sqrt(B*B-4*A*C))/(2*A);
   R2 = (-B - sqrt(B*B-4*A*C))/(2*A);
   if(( sqrt(B*B-4*A*C)) >= 0 && A != 0){

    printf("R1 = %.5f\n",R1);
    printf("R2 = %.5f\n",R2);


   }else{

   printf("Impossivel calcular\n");

}

    return 0;

}
