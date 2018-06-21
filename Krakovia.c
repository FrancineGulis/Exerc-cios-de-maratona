#include <stdio.h>

int main(){

    long long valor, conta, pagar;
    int i, itens, amigos, cont=1;

    scanf("%d",&itens);
    scanf("%d",&amigos);

    while((itens!=0)&&(amigos!=0)){
        conta=valor=0;

        for(i=0; i<itens; i++){
            scanf("%ld", &valor);
            conta = conta + valor;
        }
        pagar = conta/amigos;

        printf("Bill %d costs %ld: each friend should pay %ld\n", cont, conta, pagar);

        cont++;
        scanf("%d",&itens);
        scanf("%d",&amigos);
    }

return 1;
}
