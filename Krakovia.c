/******************************************************************************************

KRAKOVIA - Krakóvia

Viktor mora em um país longíquo e frio, chamado Krakóvia, que está passando por tempos difíceis. Viktor trabalha em uma fábrica
e após um dia de trabalho ele geralmente vai com alguns amigos a um bar, para beber algumas cervejas e sonhar com tempos melhores.

Devido a alguns problemas econômicos, a inflação está muito alta na Krakóvia e uma cerveja custa 5.400.000.000 dólares krakovianos.
Por conta disso, é difícil conferir o valor da conta e dividi-lo igualmente entre Viktor e seus amigos. Como você tem um bom coração,
você decidiu ajudá-los a solucionar esse problema.

Entrada
Haverá vários casos de teste, cada caso de teste começa com dois números 1 ≤ N ≤ 1000 que é o número de itens na conta
e 1 ≤ F ≤ 20 que representa quantos amigos estão no bar e devem pagar a conta. Seguem N linhas, cada linha representa o
valor de um item. O valor de um item é indicado por um inteiro 1 ≤ V ≤ 10^20. A entrada é terminada por uma conta onde N = F = 0.

Saída
Para cada caso de teste você deve imprimir a mensagem: Bill #N costs S: each friend should pay P, onde N representa o número da conta,
começando a partir de 1; S indica a soma dos itens da conta; e P é quanto dinheiro cada amigo deve pagar. Você deve calcular este valor
dividindo o valor total da conta pelo número de amigos no bar, se o resultado não é um valor inteiro então imprima apenas a parte
inteira do resultado, veja o exemplo de entrada/saída. Após cada caso de teste, você deve imprimir uma linha em branco.

*****************************************************************************************/




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
