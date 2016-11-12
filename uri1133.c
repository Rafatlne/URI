#include <stdio.h>
int main()
{
	int a,b,i,temp;
	scanf("%d %d",&a,&b);

	if(b<a){temp=b,b=a;a=temp;}

	for(i=a+1;i<b;i++){

		if(i%5==2) printf("%d\n",i);
		if(i%5==3) printf("%d\n",i);
		
	}




	return 0;
}