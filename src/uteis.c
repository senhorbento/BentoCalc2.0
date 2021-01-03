#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "uteis.h"

void limparTela(){
    system("clear || cls");
}

void limparBuffer(){
    setbuf(stdin,NULL);
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
}

int deNovo(){
    char resposta[10];
    do{
        limparBuffer();
        printf("Deseja continuar?[S/N] ");
        scanf("%s", resposta);
        limparBuffer();
        if(!(strcmp(resposta, "N") == 0 || strcmp(resposta, "n") == 0 || strcmp(resposta, "S") == 0 || strcmp(resposta, "s") == 0))
            printf("Termo incorreto, favor digite \"S\" ou \"N\"\n\n");
    }while(!(strcmp(resposta, "N") == 0 || strcmp(resposta, "n") == 0 || strcmp(resposta, "S") == 0 || strcmp(resposta, "s") == 0));
    limparTela();
    if (strcmp(resposta, "N") == 0 || strcmp(resposta, "n") == 0)
        return 0;
    else return 1;
}