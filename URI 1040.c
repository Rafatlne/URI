#include <stdio.h>

int main()

{
  float N1,N2,N3,N4,N5,avrg,avrg2;
  scanf("%f %f %f %f",&N1,&N2,&N3,&N4);


  avrg = (((N1*2)+(N2*3)+(N3*4)+(N4*1))/10);
  printf("Media: %.1f\n",avrg);

  if(avrg >= 7.0){

   printf("Aluno aprovado.\n");

  }if(avrg < 5.0){
   printf("Aluno reprovado.\n");


  }if(avrg >=5.0 && avrg <=6.9){

   printf("Aluno em exame.\n");
   scanf("%f",&N5);


  printf("Nota do exame: %.1f\n",N5);

  avrg2 = (avrg+N5)/2;

  if(avrg2 >= 5.0){

   printf("Aluno aprovado.\n");
   printf("Media final: %.1f\n",avrg2);

  }else{

   printf("Aluno reprovado.\n");
   printf("Media final: %.1f\n",avrg2);

  }
}

 return 0;


}
