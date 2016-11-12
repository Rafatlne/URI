#include <stdio.h>
int main()
{
	int a,b,i,sum=0,temp;
	scanf("%d %d",&a,&b);

	if(b<a){temp=b,b=a;a=temp;}

	for(i=a;i<=b;i++){

		if(i%13!=0) sum+=i;

		
	}

   printf("%d\n",sum);


	return 0;
}