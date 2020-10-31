#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "menus.h"

#define _TAM_TITULO_ 30

void limparTela(){
        system("clear || cls");
        return;
}

void cabecalho(char titulo[]){
        #define _MAX_ 40
        int i,espacos;
        limparTela();
        for(i=0;i<_MAX_;i++) printf("#");
        if(i==_MAX_) printf("\n");
        printf("# %s",titulo);
        espacos=(_MAX_-3)-strlen(titulo);
        for(i=0;i<espacos;i++){
                if(i==espacos-1)
                        printf(" #\n");
                else 
                        printf(" ");
        }
        for(i=0;i<_MAX_;i++) printf("#");
        if(i==_MAX_) printf("\n\n");
        return;
}

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
        return ;
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
        return ;
}

void menuEstatistica(){
        limparTela();
        cabecalho("Estatistica - Formulas conhecidas");
        printf("1 - Media Aritmetica\n");
        printf("2 - Variancia\n");
        printf("3 - Desvio Padrao\n\n");
        printf("0 - Voltar\n");
        printf("Qual operacao? ");
        return ;
}

void menuMecanica(){
        limparTela();
        cabecalho("Mecanica - Formulas conhecidas");
        printf("1 - Velocidade Media\n");
        printf("2 - Variacao de Espaco\n");
        printf("3 - Variacao de Tempo\n\n");
        printf("0 - Voltar\n\n");
        printf("Qual operacao? ");
        return ;
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
        return ;
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
        return ;
}

void menuPotencia(){
        limparTela();
        cabecalho("Potencia - Formulas conhecidas");
        printf("1 - Sabendo a Resistencia\n");
        printf("2 - Sabendo a Voltagem\n\n");
        printf("Qual o caso? ");
        return ;
}

void menuZoeira(){
        limparTela();
        cabecalho(":::::::Men At Work::::::::::::::::::");
        return ;
}

int deNovo(){
        char resposta[3];
        do{
                printf("\nDeseja continuar? [S/N] ");
                scanf("%s", resposta);
                if(strlen(resposta)>1)
                        printf("Somente \"S\" ou \"N\" eh aceito\n");
        }while(strlen(resposta)>1);
        limparTela();
        if (strcmp(resposta,"N") || strcmp(resposta,"n")) 
                return 0;
        else if (strcmp(resposta,"S") || strcmp(resposta,"s")) 
                return 1;   
}