#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int hi, mi, hf, mf, mr, hr;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

     hr = hf - hi;
     mr = mf - mi;

    if (hf - hi <= 0){
        hr = 24 + hf - hi;}


    if (mf - mi <= 0) {
        mr = 60 + mf - mi;
        hr--;
    }



    if (hf == hi && mf == mi) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, mr);
    }
    return 0;
}
