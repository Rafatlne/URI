#include <stdio.h>
int main()
{



	int a,b,c,count=0,inter=0,gremio=0,empates=0,game=0;

	while(1){


		if(count==1){
			scanf("%d",&c);
			if(c==1){count=0;continue;}
			else if(c==2) break;
		}
		else if(count==0){
			scanf("%d %d",&a,&b);
			if(a>b) inter++;
			else if(b>a) gremio++;
			else empates++;
			count = 1;
			game++;
	    }

	    if(count==1) printf("Novo grenal (1-sim 2-nao)\n");


	    }

	printf("%d grenais\n",game);

	printf("Inter:%d\nGremio:%d\nEmpates:%d\n",inter,gremio,empates);

	if (inter>gremio) printf("Inter venceu mais\n");
	else if(gremio>inter) printf("Gremio venceu mais");
	else printf("Não houve vencedor");


	return 0;
}