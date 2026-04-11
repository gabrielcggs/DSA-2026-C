#include<stdio.h>

int main(){

    /*Estrutura (LOOP) FOR*/
    int numero = 7;

    //for(int i = 0; i < 11; i++){
    //    int tabuada = (i * numero);
    //    printf("%d x %d = %d\n", numero, i, tabuada);
    //}

    int i = 0;
    while(i < 11){
        int tabuada = (i * numero);
        printf("%d x %d = %d\n", numero, i, tabuada);
        i++;
    }

    return 0;
}