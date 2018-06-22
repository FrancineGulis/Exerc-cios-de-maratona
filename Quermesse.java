/****************************************************************

QUERM - Quermesse

Os alunos do �ltimo ano resolveram organizar uma quermesse para arrecadar fundos para a festa de formatura. A festa prometia ser um sucesso, pois o pai de um dos formandos, Te�filo, dono de uma loja de inform�tica, decidiu doar um computador para ser sorteado entre os que comparecessem. Os alunos prepararam barracas de quent�o, pipoca, doces, ensaiaram a quadrilha e colocaram � venda ingressos numerados sequencialmente a partir de 1. O n�mero do ingresso serviria para o sorteio do computador. Ficou acertado que Te�filo decidiria o m�todo de sorteio; em princ�pio o sorteio seria, claro, computadorizado.

O local escolhido para a festa foi o gin�sio da escola. A entrada dos participantes foi pela porta principal, que possui uma roleta, onde passa uma pessoa por vez. Na entrada, um funcion�rio inseriu, em uma lista no computador da escola, o n�mero do ingresso, na ordem de chegada dos participantes. Depois da entrada de todos os participantes, Te�filo come�ou a trabalhar no computador para preparar o sorteio. Verificando a lista de presentes, notou uma caracter�stica not�vel: havia apenas um caso, em toda a lista, em que o participante que possuia o ingresso numerado com i, havia sido a i-�sima pessoa a entrar no gin�sio. Te�filo ficou t�o encantado com a coincid�ncia que decidiu que o sorteio n�o seria necess�rio: esta pessoa seria o ganhador do computador.

Tarefa
Conhecendo a lista de participantes, por ordem de chegada, sua tarefa � determinar o n�mero do ingresso premiado, sabendo que o ganhador � o �nico participante que tem o n�mero do ingresso igual � sua posi��o de entrada na festa.

Entrada
A entrada � composta de v�rios conjuntos de teste. A primeira linha de um conjunto de teste cont�m um n�mero inteiro positivo N que indica o n�mero de participantes da festa. A linha seguinte cont�m a sequ�ncia, em ordem de entrada, dos N ingressos das pessoas que participaram da festa. O final da entrada � indicado quando N = 0. Para cada conjunto de teste da entrada haver� um �nico ganhador.

Sa�da
Para cada conjunto de teste da entrada seu programa deve produzir tr�s linhas. A primeira linha identifica o conjunto de teste, no formato "Teste n", onde n � numerado a partir de 1. A segunda linha deve conter o n�mero do ingresso do ganhador, conforme determinado pelo seu programa. A terceira linha deve ser deixada em branco. A grafia mostrada no Exemplo de Sa�da, abaixo, deve ser seguida rigorosamente.

****************************************************************/

import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int N, teste = 0;
        int[] entrada = new int[10000];
        int[] resultado = new int[100];
        boolean achou = false;

        N = ler.nextInt();

        while (N != 0) {
            for (int i = 0; i<N; i++) {
                entrada[i] = ler.nextInt();
            }            
            for (int i = 1; i <= N ; i++) {
                if(i == entrada[i-1]){
                    resultado[teste]=i;
                    teste++;
                    achou = true;
                    break;
                }
            }
            
            if(!achou){
                resultado[teste]=0;
                teste++;
            }    
           
            achou = false;
            N = ler.nextInt();
        }
        
        for(int i=0; i<teste; i++){
            System.out.println("Teste " + (i+1));
            System.out.println(resultado[i]);
            System.out.println("");            
        }        

    }
}
