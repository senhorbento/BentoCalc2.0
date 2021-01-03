#include <stdio.h>

#include "algebra.h"
#include "eletrica.h"
#include "menus.h"
#include "uteis.h"

int main(){
    int escolha,selecao,subSelecao,continuar;
    char resposta[10];
    do{
        menuPrincipal();
        scanf("%d", &escolha);
        switch(escolha){
            case 0:
                limparTela();
                cabecalho("Obrigado por usar a BENTO CALC!"); 
                break;
            case 1: 
                do{
                    menuEletrica();
                    scanf("%d", &selecao);
                    switch(selecao){
                        case 0:
                            break;
                        case 1: 
                            do{
                                voltagem();
                                continuar=deNovo();
                                printf("%d", continuar);
                            }while(continuar!=0);
                            break;
                        case 2:
                            do{
                                resistencia();
                                continuar=deNovo();
                            }while(continuar!=0);
                            break;
                        case 3:
                            do{
                                corrente();
                                continuar=deNovo();
                            }while(continuar!=0);
                            break;
                        case 4:
                            do{
                                subSelecao=menuPotencia();
                                switch (subSelecao){
                                    case 0: 
                                        break;
                                    case 1:
                                        do{
                                            potenciaResistencia();
                                            continuar=deNovo();
                                        }while(continuar!=0);
                                        break;
                                    case 2:
                                        do{
                                            potenciaVoltagem();
                                            continuar=deNovo();
                                        }while(continuar!=0);
                                        break;
                                }
                            }while(subSelecao!=0);
                            break;
                        default:
                            break;
                    }
                }while(selecao!=0);
                break;
            case 2:
                do{
                    equacao2();
                    continuar=deNovo();
                }while(continuar!=0);
                break;
            case 3:
                do{
                    menuEstatistica();
                    scanf("%d", &selecao);
                    switch(selecao){
                        case 0: 
                            break;
                        case 1:
                        do{
                            menuAritmetica();
                            continuar=deNovo();
                        }while(continuar!=0); 
                    }
                }while(continuar!=0);
                break;
            case 4: 
                do{
                    menuMecanica();
                    scanf("%d", &selecao);
                }while(continuar!=0);
                break;
            case 5: 
                do{
                    menuTermometria();
                    scanf("%d", &selecao);
                }while(continuar!=0);
                break;
            case 6: 
                do{
                    menuVelocidade();
                    scanf("%d", &selecao);
                }while(continuar!=0);
                break;
            case 7: 
                do{
                    menuZoeira();
                    continuar=deNovo();
                }while(continuar!=0);
            default:
                break;
        }
    }while(escolha!=0);
}