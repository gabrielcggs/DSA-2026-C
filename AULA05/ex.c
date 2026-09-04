#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    int num;
    char nome[50];
    float preco;
}Produto;

void aplicarDesconto(Produto* p, float desc) {
    p->preco = desc;
}

int main(){
    Produto prod = {1, "Teclado", 150.0};

    printf("O preco atual: %f\n", prod.preco);
    aplicarDesconto(&prod, 10.0);
    printf("O preco atualizado: %f\n", prod.preco);

    return 0;
}