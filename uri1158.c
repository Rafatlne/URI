#include <stdio.h>

int main()

{
	int tc,x,y,sum=0,i,temp;

	scanf("%d",&tc);

	while(tc--)
	{
		scanf("%d %d",&x,&y);

		for(i=y;i>0;i--)
		{
			if(x%2==0) x = x+1;

			sum+=x;
			x = x+2;
		}

		printf("%d\n",sum);
		sum = 0;
	}

}
