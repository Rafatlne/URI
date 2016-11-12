#include <stdio.h>

int main()
{

	int a,i,j=1,count=0;

	scanf("%d",&a);

	while(a--){

			for(i=j;i<j+3;i++){
				if(count==0) {printf("%d ",i); count++;}
				if(count==1) {printf("%d ",i*i); count++;}
				if(count==2) {printf("%d",i*i*i); count++;}
			}
			printf("\n");

 	count = 0;
 	j++;


	}
}
