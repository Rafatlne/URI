#include <stdio.h>

int main()

{

  int tc,a,b,count=1,i;

  scanf("%d",&tc);

  for(i=1;i<=tc;i++)
	{
		printf("%d ",i);
		printf("%d ",i*i);
		printf("%d\n",i*i*i);
		printf("%d ",i);
		printf("%d ",(i*i)+1);
		printf("%d\n",(i*i*i)+1);


	}


}
