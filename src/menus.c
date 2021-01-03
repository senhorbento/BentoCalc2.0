#include <stdio.h>
#include <string.h>

#include "menus.h"
#include "algebra.h"
#include "uteis.h"

#define _TAM_TITULO_ 30

void menuPrincipal(){
    limparTela();
    cabecalho("Materias");
    printf("1 - Eletrica\n");
    printf("2 - Equacao do 2 grau\n");
    printf("3 - Estatistica\n");
    printf("4 - Mecanica\n");
    printf("5 - Conversoes termometricas\n");
    printf("6 - Conversoes de velocidade\n");
    printf("7 - ...\n\n");
    printf("0 - Sair\n\n");
    printf("Qual Materia? ");
}

void menuEletrica(){
    limparTela();
    cabecalho("Eletrica - Formulas conhecidas");
    printf("1 - Voltagem\n");
    printf("2 - Resistencia\n");
    printf("3 - Corrente\n");
    printf("4 - Potencia\n\n");
    printf("0 - Voltar\n\n");
    printf("Qual operacao? ");
}

void menuEstatistica(){
    limparTela();
    cabecalho("Estatistica - Formulas conhecidas");
    printf("1 - Media Aritmetica\n");
    printf("2 - Variancia\n");
    printf("3 - Desvio Padrao\n\n");
    printf("0 - Voltar\n");
    printf("Qual operacao? ");
}

void menuMecanica(){
    limparTela();
    cabecalho("Mecanica - Formulas conhecidas");
    printf("1 - Velocidade Media\n");
    printf("2 - Variacao de Espaco\n");
    printf("3 - Variacao de Tempo\n\n");
    printf("0 - Voltar\n\n");
    printf("Qual operacao? ");
}

void menuTermometria(){
    limparTela();
    cabecalho("Termometria - Formulas conhecidas");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Kelvin\n");
    printf("4 - Fahrenheit para Celsius\n");
    printf("5 - Kelvin para Celsius\n");
    printf("6 - Kelvin para Fahrenheit\n\n");
    printf("0 - Voltar\n\n");
    printf("Qual operacao? ");
}

void menuVelocidade(){
    limparTela();
    cabecalho("Velocidades - Formulas conhecidas");
    printf("1 - Km/h para Mph\n");
    printf("2 - Km/h para M/s\n");
    printf("3 - Mph para Km/h\n");
    printf("4 - Mph para M/s\n");
    printf("5 - M/s para Km/h\n");
    printf("6 - M/s para Mph\n\n");
    printf("0 - Voltar\n\n");
    printf("Qual operacao? ");
}

int menuPotencia(){
    #define _MAX_OP_ 2
    int selecao;
    do{
        limparTela();
        cabecalho("Potencia - Formulas conhecidas");
        printf("1 - Sabendo a Resistencia\n");
        printf("2 - Sabendo a Voltagem\n\n");
        printf("0 - Voltar\n\n");
        printf("Qual o caso? ");
        scanf("%d", &selecao);
    }while(selecao < 0 || selecao > _MAX_OP_);
    return selecao;
}

void menuZoeira(){
    limparTela();
    cabecalho(":::::::Men At Work::::::::::::::::::");
}

void menuAritmetica(){
    char resposta[10];
    limparTela();
    cabecalho("Media Aritmetica");
    do{
        limparBuffer();
        printf("Os termos se repetem?[S/N] ");
        scanf("%s", resposta);
        limparBuffer();
        if(!(strcmp(resposta, "N") == 0 || strcmp(resposta, "n") == 0 || strcmp(resposta, "S") == 0 || strcmp(resposta, "s") == 0))
            printf("Termo incorreto, favor digite \"S\" ou \"N\"\n\n");
    }while(!(strcmp(resposta, "N") == 0 || strcmp(resposta, "n") == 0 || strcmp(resposta, "S") == 0 || strcmp(resposta, "s") == 0));
    
    if (strcmp(resposta, "N") == 0 || strcmp(resposta, "n") == 0){
        mediaAritmeticaNrepetida();
    }
    else{
        mediaAritmeticaRepetida();
    }
}
