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
int menuPrincipal(){
        char titulo[_TAM_TITULO_]="Materias";
        limparTela();
        cabecalho(titulo);
        printf("1 - Eletrica\n");
        printf("2 - Equacao do 2 grau\n");
        printf("3 - Estatistica\n");
        printf("4 - Mecanica\n");
        printf("5 - Conversoes termometricas\n");
        printf("6 - Conversoes de velocidade\n");
        printf("7 - ...\n\n");
        printf("0 - Sair\n\n");
        printf("Qual Materia? ");
        return 7;
}
int menuEletrica(){
        char titulo[_TAM_TITULO_]="Eletrica";
        limparTela();
        cabecalho(titulo);
        printf("1 - Voltagem\n");
        printf("2 - Resistencia\n");
        printf("3 - Corrente\n");
        printf("4 - Potencia\n\n");
        printf("0 - Voltar\n\n");
        printf("Qual operacao? ");
        return 4;
}
int menuEstatistica(){
        char titulo[_TAM_TITULO_]="Estatistica";
        limparTela();
        cabecalho(titulo);
        printf("1 - Media Aritmetica\n");
        printf("2 - Variancia\n");
        printf("3 - Desvio Padrao\n\n");
        printf("0 - Voltar\n");
        printf("Qual operacao? ");
        return 3;
}
int menuMecanica(){
        char titulo[_TAM_TITULO_]="Mecanica";
        limparTela();
        cabecalho(titulo);
        printf("1 - Velocidade Media\n");
        printf("2 - Variacao de Espaco\n");
        printf("3 - Variacao de Tempo\n\n");
        printf("0 - Voltar\n\n");
        printf("Qual operacao? ");
        return 3;
}
int menuTermometria(){
        char titulo[_TAM_TITULO_]="Termometria";
        limparTela();
        cabecalho(titulo);
        printf("1 - Celsius para Fahrenheit\n");
        printf("2 - Celsius para Kelvin\n");
        printf("3 - Fahrenheit para Kelvin\n");
        printf("4 - Fahrenheit para Celsius\n");
        printf("5 - Kelvin para Celsius\n");
        printf("6 - Kelvin para Fahrenheit\n\n");
        printf("0 - Voltar\n\n");
        printf("Qual operacao? ");
        return 6;
}
int menuVelocidade(){
        char titulo[_TAM_TITULO_]="Velocidades";
        limparTela();
        cabecalho(titulo);
        printf("1 - Km/h para Mph\n");
        printf("2 - Km/h para M/s\n");
        printf("3 - Mph para Km/h\n");
        printf("4 - Mph para M/s\n");
        printf("5 - M/s para Km/h\n");
        printf("6 - M/s para Mph\n\n");
        printf("0 - Voltar\n\n");
        printf("Qual operacao? ");
        return 6;
}
void menuZoeira(){
        limparTela();
        printf(":::::: Men at Work ::::::");
        return ;
}