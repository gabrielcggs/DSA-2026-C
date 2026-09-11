#include<stdio.h>

long long fibonacci(int n){
    printf("%d", n);
    //Condição base
    if(n <= 1) return n;
    printf("fibonacci(n - 1) --> %d\n", fibonacci(n - 1));
    printf("fibonacci(n - 2) --> %d\n", fibonacci(n - 2));
    // Condição Recursiva
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// Função Interativo do Fibonacci --> Utilizar Loop For ou While

int main(){
    // Declaração de variaveis
    int n;

    // Solicitar um numero e executar o fibonacci e apresentar o resultado
    printf("Digite um numero para saber o resultado de Fibonacci: ");
    scanf("%d", &n);

    printf(" O resultado de Fibonacci para o numero %d --> %lld.\n", n, fibonacci(n));

    return 0;
}