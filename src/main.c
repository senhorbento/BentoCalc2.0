#include <stdio.h>

#include "menus.h"
#include "formulas.h"

int main(){
    int max_opc, escolha, selecao, continuar;
    
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
                max_opc=menuEletrica();
                scanf("%d", &selecao);
                switch(selecao){
                    case 0:
                        break;
                    case 1: 
                        do{
                            voltagem();
                            continuar=deNovo();
                        }while(continuar!=0);
                        break;
                    case 2:
                    case 3:
                    case 4:
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
                    max_opc=menuEstatistica();
                    scanf("%d", &selecao);
                }while(continuar!=0);
                break;
            case 4: 
                do{
                    max_opc=menuMecanica();
                    scanf("%d", &selecao);
                }while(continuar!=0);
                break;
            case 5: 
                do{
                    max_opc=menuTermometria();
                    scanf("%d", &selecao);
                }while(continuar!=0);
                break;
            case 6: 
                do{
                    max_opc=menuVelocidade();
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