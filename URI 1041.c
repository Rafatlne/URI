#include <stdio.h>

int main(void)

{
  float x,y;

  scanf("%f %f", &x,&y);

  if(x==0 && y==0){

  printf("Origem\n");

  }
  if(x>0 && y>0){

  printf("Q1\n");

  }
  if(x<0 && y>0){

  printf("Q2\n");

  }
  if(x<0 && y<0){

  printf("Q3\n");

  }
  if(x>0 && y<0){

  printf("Q4\n");

  }
  if(x>0 && y==0){

  printf("Eixo X\n");

  }
  if(y>0 && x==0){

  printf("Eixo Y\n");

  }
  if(x<0 && y==0){

  printf("Eixo X\n");

  }
  if(y<0 && x==0){

  printf("Eixo Y\n");

  }



 return 0;

}
