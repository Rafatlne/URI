#include <stdio.h>

int main()
{
	int tc,sum,i;
	long long int x;

	scanf("%d",&tc);

	while(tc--)
	{
		scanf("%lld",&x);
		sum=0;
		{
			if(x%i==0) sum+=i;
		}

		if(sum==x) printf("%lld eh perfeito\n",x);
		else printf("%lld nao eh perfeito\n",x);
	}
}
