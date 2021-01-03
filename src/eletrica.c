#include <stdio.h>
#include <math.h>

#include "uteis.h"

void voltagem(){
    double R,C;
    limparTela();
    cabecalho("Calculo de Voltagem");
    printf("Valor da Resistencia = ");
    scanf("%lf", &R);
    printf("Valor da Corrente = ");
    scanf("%lf", &C);
    printf("\n");
    R = R * C;
    printf("Voltagem = %.3lf Volts\n", R);
}

void resistencia(){
    double A,B;
    limparTela();
    cabecalho("Calculo de Resistencia");
    printf("Valor da Voltagem = ");
    scanf("%lf", &A);
    printf("Valor da Corrente = ");
    scanf("%lf", &B);
    printf("\n");
    B = A / B;
    printf("Resistencia = %.3lf Ohms\n", B);
}

void corrente(){
    double A,B;
    limparTela();
    cabecalho("Calculo de Corrente");
    printf("Valor da Voltagem = ");
    scanf("%lf", &A);
    printf("Valor da Resistencia = ");
    scanf("%lf", &B);
    printf("\n");
    B = A / B;
    printf("Corrente = %.3lf Amperes\n", B);
}

void potenciaResistencia(){
    double A,B;
    limparTela();
    cabecalho("Potencia sabendo Resistencia");
    printf("Valor da Resistencia = ");
    scanf("%lf", &A);
    printf("Valor da Corrente = ");
    scanf("%lf", &B);
    printf("\n");
    B = A * pow(B, 2);
    printf("Potencia = %lf Watts\n", B);
}

void potenciaVoltagem(){
    double A,B;
    cabecalho("Potencia sabendo Voltagem");
    printf("Valor da Voltagem = ");
    scanf("%lf", &A);
    printf("Valor da Corrente = ");
    scanf("%lf", &B);
    printf("\n");
    B = A * B;
    printf("Potencia = %lf Watts\n", B);
}