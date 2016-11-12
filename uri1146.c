#include <stdio.h>

int main()
{
	int i,x,count=0;

	while(1)
	{
		scanf("%d",&x);

		if(x!=0)
		{
			for(i=1;i<=x;i++)
				{
					printf("%d",i);
					count++;
					if(count==x)
					{
						printf("\n");
						count=0;
                        continue;
					}else printf(" ");
				}
		} else break;
	}
}
