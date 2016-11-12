#include <stdio.h>

int main()

{
  
  double a,c=0,sum=0;

  while(c!=2){

  	scanf("%lf",&a);

  	if(a>=0.0 && a<=10.0){sum+=a;c++;}
    else printf("nota invalida\n");

  }
 printf("media = %.2lf\n", sum/2 );

}
