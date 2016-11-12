#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x[10],i,v,j;
	
	scanf("%d",&v);

	for(i=0,j=v;i<10;i++,j=j*2)
	{


		x[i] = j;

		printf("N[%d] = %d\n",i,x[i]);
	}



	return 0;
}

