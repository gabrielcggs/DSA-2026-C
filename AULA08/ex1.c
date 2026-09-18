#include<stdio.h>

void contagem(int n){
    // Caso Base
    if(n == 0){
        printf("FIM!");
        return;
    }
    // Caso Recursivo
    //printf("%d\n", n);
    contagem(n - 1);
    printf("%d\n", n);
}

int main(){
    contagem(2);

    return 0;
}