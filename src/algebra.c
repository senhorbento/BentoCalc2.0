#include <stdio.h>
#include <math.h>

#include "uteis.h"

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
}

void mediaAritmeticaNrepetida(){
    int i,totalTermos;
    double valor,resultado=0;
    cabecalho("Media Aritmetica - Simples");
    printf("Total de termos = ");
    scanf("%d", &totalTermos);
    for(i=0;i<totalTermos;i++){
        printf("Termo %d = ", i+1);
        scanf("%lf", &valor);
        resultado += valor;
    }
    resultado = resultado/totalTermos;
    printf("Media Aritmetica = %.5lf\n", resultado);
}