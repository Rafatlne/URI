#include <stdio.h>

int main()
{
	int tc,n,i;
	unsigned long long f[60];
	scanf("%d",&tc);

	while(tc--)
	{
		scanf("%d",&n);
		f[0] = 0;
		f[1] = 1;

		for(i=2;i<=n;i++)
		{
			f[i]= f[i-1] + f[i-2];
		}

		printf("Fib(%d) = %llu\n",n,f[n]);

	}
	return 0;
}
