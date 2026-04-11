#include<stdio.h>

int main(){
    int valor_1 = 10;
    float valor_2 = 3;

    printf("O resultado da soma e: %.2f\n", valor_1 + valor_2);
    printf("O resultado da subtracao e: %.1f\n", valor_1 - valor_2);
    printf("O resultado da multiplicacao e: %.3f\n", valor_1 * valor_2);
    printf("O resultado da divisao e: %.9f\n", valor_1/valor_2);
    printf("O resto da divisao e: %d\n", valor_1 % (int)valor_2);

    return 0;
}