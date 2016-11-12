#include <stdio.h>
int main()
{
	int tc,pa,pb,count,flag;
	double g1,g2;
	scanf("%d",&tc);

	while(tc--)
	{
		scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
		count =0;
		flag=0;

			while(pa<=pb)
			{
				pa += pa*(g1/100);
				pb += pb*(g2/100);
				count++;


			if(count>100)
			{

				flag=1;
				break;
			}
		}

		if(flag==0) printf("%d anos.\n",count);
		else if(flag==1) printf("Mais de 1 seculo.\n");
	}
}
