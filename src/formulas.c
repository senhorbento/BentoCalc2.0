#include <stdio.h>
#include <math.h>

#include "menus.h"
#include "formulas.h"

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
    printf("Voltagem = %.3lf\n", R);
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
    printf("Resistencia = %.3lf\n", B);
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
    printf("Corrente = %.3lf\n", B);
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
    printf("Potencia = %lf\n", B);
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
    printf("Potencia = %lf\n", B);
}

void equacao2(){
    double A,B,C,D;
    limparTela();
    cabecalho("Equacao do segundo grau");
    printf("Insira o valor de a = ");
    scanf("%lf", &A);
    printf("Insira o valor de b = ");
    scanf("%lf", &B);
    printf("Insira o valor de c = ");
    scanf("%lf", &C);
    printf("\n");
    D = pow(B, 2) - 4 * (A * C);
    if (0 == A || 0 >= D) {
        printf("Delta = %.5lf\n", D);
        printf("Impossivel calcular, este numero eh irracional\n");
    }
    else {
        C = (B * -1 + sqrt(D)) / (2 * A);
        printf("X1 = %.5lf\n", C);
        C = (B * -1 - sqrt(D)) / (2 * A);
        printf("X2 = %.5lf\n", C);
        printf("Delta = %.5lf\n", D);
    }
    return;
}