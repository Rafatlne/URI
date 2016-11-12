#include <stdio.h>

int main()
{

  	int a;

  	scanf("%d",&a);

 	int recursion(int n);
  	int value = recursion(a);
  	printf("%d\n",value);


}

 int recursion(int n)
{
	if(n==1 || n==0) return 1;
	return (n*recursion(n-1));

}
