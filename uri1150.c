#include <stdio.h>

int main()

{

	int x,z=0,y=0,i,count=0,b;

	scanf("%d",&x);

	while(z<=x)
	{
		scanf("%d",&z);
		if(z>x) b = z;
	}

	for(i=x;i<=b;i++)
		{
			y+=i;
			if(y<=b)
			count++;
			else {
				count++;
				break;


			}
		}

		printf("%d\n",count);
}
