#include <stdio.h>

int main()

{
	int x,sum=0,i;



	while(1)
	{

      	scanf("%d",&x);
      	if(x==0) break;
		for(i=5;i>0;i--)
		{
			if(x%2!=0) x = x+1;

			sum+=x;
			x = x+2;
		}

		printf("%d\n",sum);
		sum = 0;
	}

}

