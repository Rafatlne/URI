#include <stdio.h>

int main()

{

    double x;
    int y;

    y = (int)x;

    scanf("%lf",&x);

    y = (x-fmod(x,100))/100;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n",y);

    x = fmod(x,100);
    y = (x - fmod(x,50))/50;
    printf("%d nota(s) de R$ 50.00\n",y);

    x = fmod(x,50);
    y = (x - fmod(x,20))/20;
    printf("%d nota(s) de R$ 20.00\n",y);

    x = fmod(x,20);
    y = (x - fmod(x,10));
    printf("%d nota(s) de R$ 10.00\n",y);

    x = fmod(x,10);
    y = (x - fmod(x,5))/5;
    printf("%d nota(s) de R$ 5.00\n",y);

    x = fmod(x,5);
    y = (x - fmod(x,2))/2;
    printf("%d nota(s) de R$ 2.00\n",y);

    x = fmod(x,2);
    y = (x - fmod(x,1))/1;
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",y);

    x = fmod(x,1)*100;
    y = (x - fmod(x,50))/50;
    printf("%d moeda(s) de R$ 0.50\n",y);

    x = fmod(x,50);
    y = (x - fmod(x,25))/25;
    printf("%d moeda(s) de R$ 0.25\n",y);

    x = fmod(x,25);
    y = (x - fmod(x,10))/10;
    printf("%d moeda(s) de R$ 0.10\n",y);


    x = fmod(x,10);
    y = (x - fmod(x,5))/5;
    printf("%d moeda(s) de R$ 0.05\n", y);


    x = fmod(x,5);
    y = (x - fmod(x,1))/1;
    printf("%d moeda(s) de R$ 0.01\n", y);

}
