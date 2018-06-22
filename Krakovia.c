/******************************************************************************************

KRAKOVIA - Krak�via

Viktor mora em um pa�s long�quo e frio, chamado Krak�via, que est� passando por tempos dif�ceis. Viktor trabalha em uma f�brica e ap�s um dia de trabalho ele geralmente vai com alguns amigos a um bar, para beber algumas cervejas e sonhar com tempos melhores.

Devido a alguns problemas econ�micos, a infla��o est� muito alta na Krak�via e uma cerveja custa 5.400.000.000 d�lares krakovianos. Por conta disso, � dif�cil conferir o valor da conta e dividi-lo igualmente entre Viktor e seus amigos. Como voc� tem um bom cora��o, voc� decidiu ajud�-los a solucionar esse problema.

Entrada
Haver� v�rios casos de teste, cada caso de teste come�a com dois n�meros 1 = N = 1000 que � o n�mero de itens na conta e 1 = F = 20 que representa quantos amigos est�o no bar e devem pagar a conta. Seguem N linhas, cada linha representa o valor de um item. O valor de um item � indicado por um inteiro 1 = V = 1020. A entrada � terminada por uma conta onde N = F = 0.

Sa�da
Para cada caso de teste voc� deve imprimir a mensagem: Bill #N costs S: each friend should pay P, onde N representa o n�mero da conta, come�ando a partir de 1; S indica a soma dos itens da conta; e P � quanto dinheiro cada amigo deve pagar. Voc� deve calcular este valor dividindo o valor total da conta pelo n�mero de amigos no bar, se o resultado n�o � um valor inteiro ent�o imprima apenas a parte inteira do resultado, veja o exemplo de entrada/sa�da. Ap�s cada caso de teste, voc� deve imprimir uma linha em branco.

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
