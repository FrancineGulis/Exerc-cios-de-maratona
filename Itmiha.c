/**************************************************************************************

ITMIHA - It-Miha

No Egito antigo as construções das pirâmides são cercadas de muitos mistérios. Muitos pesquisadores consideram que a tecnologia 
necessária para construí-las não estava disponível na época, e suspeitam que os egípcios tiveram ajuda de extraterrestres para 
fazê-las. Um exemplo de um desses mistérios são os números de “It-miha”. Na província egípcia de It-miha foi encontrada uma pedra 
em que uma sequência de números estava gravada. Aparentemente os números não tinham qualquer ligação, até que Poincaré, no final 
do século XIX conjecturou que os números gravados naquela pedra eram os 500 primeiros inteiros livres de divisores quadrados perfeitos.
Um quadrado perfeito é um número que possui raiz quadrada inteira, como 1, 4, 9, 16, 25, etc. Dizemos que um número é livre de 
divisores quadrados perfeitos se não for divisível por um quadrado perfeito maior que 1. Pode parecer simples para nós, hoje, 
determinar tais números, mas devemos pensar que naquela época, há mais de 3500 anos, mesmo o sistema de numeração utilizado era outro,
e tornava qualquer conta muito difícil. Vale lembrar que os números de “It-miha” são muito frequentes nas construções das pirâmides.
A base da pirâmide de Quéops, por exemplo é de 210 x 210 e sua altura 105 metros. Todas as dimensões são números de “It-miha”!!!
Os primeiros dez números de “It-miha” são 1, 2, 3, 5, 6, 7, 10, 11, 13, 14. Sua tarefa neste exercícios será dado N determinar
o N-ésimo número de “It-miha”.

Entrada
A entrada é composta por diversas instâncias. A primeira linha da entrada contém um inteiro T indicando o número de instâncias.
A primeira (e única) linha de cada instância contém um inteiro N, onde  1 ≤ N ≤ 20 000 000 000.

Saída
Para cada instância seu programa deve imprimir uma linha que contém o N-ésimo número livre de divisores quadrados perfeitos.

*************************************************************************************/



#include <stdio.h>
#include <math.h>

int main(){

    long vet[100], livre[100];
    long N=2, i, j, div=1;

    vet[0]=1;
    livre[0]=1;

    for(i=1; i<100; ){
        if((fmod(N,sqrt(N))== 0)){

            vet[i]=N;
            i++;
        }
        N++;
    }

    N=2;
    for(j=1; j<100; ){
        for(i=1; i<100; i++){
            if((N%vet[i])==0){
                div = 0;
                break;
            }
        }
        if(div==1){
            livre[j]=N;
            j++;
        }
        div = 1;
        N++;
    }

    for(i=0; i<100; i++)
        printf("quadrado perfeito %d = %d\n", i, vet[i]);


    for(i=0; i<100; i++)
        printf("livre %d = %d\n", i, livre[i]);



return 1;
}
