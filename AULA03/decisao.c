#include<stdio.h>

int main(){
    float nota_1, nota_2;
    int presenca;
    /*especificadores utilizados:
    %f <-- ponto flutuante (float)
    %lf ponto flutuante longo (double ou longo float)
    %d ou %i <-- inteiro (int)
    %c <-- caracteres (char)
    %s <-- strings (str)
    */
    printf("CALCULADORA DE MEDIA DO ALUNO\n");
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota_1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota_2);
    printf("Diite a frequencia d aluno de 0 a 100: ");
    scanf("%d", &presenca);
    
    float media = (nota_1 + nota_2)/2;
    printf("A media do aluno e: %.2f, a frequencia do aluno e:%d,  o aluno esta: ", media, presenca);
    if (media >= 6 && presenca >= 75){
         printf("Aprovado!");
    }else if(presenca <75){
        printf("Reprovado por falta!");
    }else if(media >= 4){
        printf("Recuperacao!");
    }else{
        printf("Reprovado!");
    }
    return 0;
    }