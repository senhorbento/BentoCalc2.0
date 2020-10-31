#include <stdio.h>
#include <math.h>

#include "menus.h"
#include "formulas.h"

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
void voltagem(){
    double B,C;
    limparTela();
    cabecalho("Calculo de Voltagem:");
    printf("Valor da Resistencia = ");
    scanf("%lf", &B);
    printf("Valor da Corrente = ");
    scanf("%lf", &C);
    printf("\n");
    B = B * C;
    printf("Voltagem = %.3lf\n", B);
}