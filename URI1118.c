#include <stdio.h> 
int main()

{
	double a,count=0,sum=0,y=0;

	while(1){
			scanf("%lf",&a);

		    if(y==1){
             if(a==1){y=0;continue;}
             else if(a==2) break;
             else{
              printf("novo calculo (1-sim 2-nao)\n");
              continue;
         }
     }else{

		 if(a>=0 && a<=10){sum+=a;count++;}
		 else printf("nota invalida\n");

		  if(count==2){
		  printf("media = %.2lf\n",sum/2.00);
		  y=1;
		  count=0;
		  sum=0;
		}

		 if(y==1) printf("novo calculo (1-sim 2-nao)\n");

        }
    }




}