#include <stdio.h>

int main(){
    char resposta;
    int a=0;
    do{
        setbuf(stdin,NULL);
        printf("Os termos se repetem?[S/N] ");
        scanf("%c", &resposta);
        setbuf(stdin,NULL);
        if(resposta == 'N'|| resposta == 'n' || resposta == 'S' || resposta == 's') break;
        else printf("Termo incorreto, favor digite \"S\" ou \"N\"\n\n");
    }while(a==0);
    printf("saiu\n");
    return 0;
}