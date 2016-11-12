#include <stdio.h>

int main()

{
	int tc,i;
	long long int x;

	scanf("%d",&tc);

	while(tc--)
	{
		scanf("%lld",&x);
		int flag=0;
		for(i=2;i<x;i++)
		{
			if(x%i==0)
				{
					flag=1;
					break;
				}
		}

		if(flag==1) printf("%lld nao eh primo\n",x);

		else printf("%lld eh primo\n",x);
	}
}
