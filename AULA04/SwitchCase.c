#include <stdio.h>

/*TIPOS DE FUNÇÕES
1 - não entra nada e não sai nada:

void nome_funcao(void){
    print("");
}

2 - entra alguma coisa e não sai nada:

void nome_funcao(tipo_do_dado nome_variavel, ){
}

exemplo: void soma(int numero_1, int numero_2){
    printf("%d", numero_1 + numero_2);
}


3 - entra alguma coisa e sai alguma coisa 

tipo_do_dado nome_funcao(tipo_do_dado nome_variavel, ...){
    return nome_variavel ou equação
}

exemplo:
int soma(int numero_1, int numero_2){
    int somatorio = numero_1 + numero_2;
    return somatorio // ou numero_1 + numero_2
}

*/ 

void menu(void){   
    printf("---MENU---\n");
    printf("1 - CALCULADORA DE MEDIA;\n");
    printf("2 - VERIFICADOR DE PRESENCA. \n");
    printf("Selecione uma das opcoes acima: ");
    
}

int main(){
    /*Criar uma interface com o usuario, onde terá duas opções:
    
    1 - media do aluno --> media = (nota 1 + nota 2)/ 2
    2 - verificação da presença ---> presença --> >= 75 -> presença adequada
                                              --> < 75% -> atentar com a presença
    */
    // Declaração das variáveis 
    int opcao;
    float nota_1, nota_2, media;
    int presenca;

    // MENU
    menu();
    scanf("%d", &opcao);

    switch(opcao){
    case 1: /*Lógica, função*/ 
    printf("--- CALCULADORA DE MEDIA ---\n");
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota_1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota_2);
    if(nota_1 < 11 && nota_1 >= 0 && nota_2 < 11 && nota_2 >= 0){
        media = (nota_1 + nota_2)/2;
       printf("A media do aluno e: %.2f. O calculo para o valor da media e (%.2f+ %.2f)/2", media, nota_1, nota_2);

    }else{
        printf("Notas fora do limite apresentadas!");
    }
    break;
    case 2: 
    printf("--- VERIFICADOR DE PRESENCA ---\n");
    printf("Digite sua frequencia de presenca (0 - 100): ");
    scanf("%d", &presenca);
    if(presenca >= 75  && presenca <= 100 ){
        printf("O aluno esta sem pendencia na presenca, a frequencia e de: %d%%", presenca); // o %% é uma forma de adicionar o simbola % apos o numero
    }else if(presenca >= 0 && presenca < 75){
        printf("O aluno esta com pendencia na presenca, a frequencia e de: %d%%", presenca);
    }else{
        printf("O valor de frequencia e invalida!");
    }

    
    break;
    default:
    printf("Opcao Invalida!");
}
return 0;

}