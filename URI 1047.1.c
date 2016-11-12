
#include <stdio.h>

int main() {
    int h, m, h1, m1, x, y;

    scanf("%d %d %d %d", &h, &m, &h1, &m1);

     x = h1 - h;
     y = m1 - m;

    if (h1 - h <=0){
        x = 24 + h1 - h;}


    if (m1 - m <=0) {
        y = 60 + m1 - m;
        x--;
    }



    if (h == h1 && m == m1) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x, y);
    }

    return 0;
}
