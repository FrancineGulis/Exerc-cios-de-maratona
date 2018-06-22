/**************************************************************************************

ITMIHA - It-Miha

No Egito antigo as constru��es das pir�mides s�o cercadas de muitos mist�rios. Muitos pesquisadores consideram que a tecnologia necess�ria para constru�-las n�o estava dispon�vel na �poca, e suspeitam que os eg�pcios tiveram ajuda de extraterrestres para faz�-las. Um exemplo de um desses mist�rios s�o os n�meros de �It-miha�. Na prov�ncia eg�pcia de It-miha foi encontrada uma pedra em que uma sequ�ncia de n�meros estava gravada. Aparentemente os n�meros n�o tinham qualquer liga��o, at� que Poincar�, no final do s�culo XIX conjecturou que os n�meros gravados naquela pedra eram os 500 primeiros inteiros livres de divisores quadrados perfeitos. Um quadrado perfeito � um n�mero que possui raiz quadrada inteira, como 1, 4, 9, 16, 25, etc. Dizemos que um n�mero � livre de divisores quadrados perfeitos se n�o for divis�vel por um quadrado perfeito maior que 1. Pode parecer simples para n�s, hoje, determinar tais n�meros, mas devemos pensar que naquela �poca, h� mais de 3500 anos, mesmo o sistema de numera��o utilizado era outro, e tornava qualquer conta muito dif�cil. Vale lembrar que os n�meros de �It-miha� s�o muito frequentes nas constru��es das pir�mides. A base da pir�mide de Qu�ops, por exemplo � de 210 x 210 e sua altura 105 metros. Todas as dimens�es s�o n�meros de �It-miha�!!!
Os primeiros dez n�meros de �It-miha� s�o 1, 2, 3, 5, 6, 7, 10, 11, 13, 14. Sua tarefa neste exerc�cios ser� dado N determinar o N-�simo n�mero de �It-miha�.

Entrada
A entrada � composta por diversas inst�ncias. A primeira linha da entrada cont�m um inteiro T indicando o n�mero de inst�ncias.
A primeira (e �nica) linha de cada inst�ncia cont�m um inteiro N, onde 1 = N = 20?000?000?000.

Sa�da
Para cada inst�ncia seu programa deve imprimir uma linha que cont�m o N-�simo n�mero livre de divisores quadrados perfeitos.

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
