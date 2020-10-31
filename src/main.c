#include <stdio.h>

#include "menus.h"
#include "formulas.h"

int main(){
    int max_opc, escolha, continuar;
    
    do{
        max_opc=menuPrincipal();
        scanf("%d", &escolha);
    }while(escolha<0 || escolha>max_opc);

    switch(escolha){
        case 0: 
            break;
        case 1: 
            //menuEletrica();
        case 2:
            do{
                limparTela();
                cabecalho("Equacao do segundo grau");
                equacao2();
                continuar=deNovo();
            }while(continuar!=0);
            break;
        case 3: 
            //menuEstatistica();
        case 4: 
            //menuMecanica();
        case 5: 
            //menuTermometria();
        case 6: 
            //menuVelocidade();
        case 7: 
            menuZoeira();
        default:
            break;
    }

    return 0;
}