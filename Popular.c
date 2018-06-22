/************************************************************************************

POPULAR - Popularidade

Autor: Tiago Mota
Uma escola est� promovendo uma elei��o de popularidade, para determinar, naturalmente, quem � o aluno mais popular. Foi definido, ent�o, que cada aluno dever� votar nos alunos de quem gosta. A quantidade de votos dados por cada aluno � vari�vel, isto �, cada aluno pode votar em quantos alunos desejar, de acordo com suas prefer�ncias. O vencedor ser� aquele que receber mais votos, ou seja, aquele para o qual mais alunos indicaram que gostam dele.

Para realizar a elei��o, cada aluno receber� uma c�dula eleitoral contendo os nomes de todos os alunos da escola (inclusive ele pr�prio), na qual dever� preencher os quadrados ao lado dos nomes dos alunos que gosta, utilizando caneta esferogr�fica azul ou preta. Ap�s o t�rmino do per�odo de vota��o, as c�dulas ser�o colocadas numa m�quina, a qual � capaz de informar quais quadrados foram preenchidos em cada c�dula.

Voc�, estagi�rio da escola em quest�o, ficou respons�vel por apresentar um prot�tipo do sistema que recebe as informa��es da m�quina e contabiliza os dados da elei��o. Por se tratar de um prot�tipo, sua tarefa � apenas escrever um programa que, dadas as informa��es sobre simula��es de preenchimento das c�dulas, informe quantos votos recebeu o vencedor da elei��o.

Voc� pode assumir que os alunos da escola s�o participativos, de forma que todos compareceram � vota��o e cada um preencheu exatamente uma c�dula eleitoral. Voc� pode assumir, ainda, que os alunos n�o sofrem por conflitos internos, de modo que cada aluno gosta de si mesmo e vota em si mesmo. Note, por�m, que a rela��o ``gostar de'' n�o � sim�trica, ou seja, se o aluno A gosta do aluno B, n�o necessariamente o aluno B gosta do aluno A.

Entrada
A entrada � composta por v�rios casos de teste, cada um correspondendo a uma simula��o de elei��o.

A primeira linha de um caso de teste cont�m apenas um inteiro, n (1 <= n <= 100), indicando a quantidade de alunos da escola (identificados por inteiros de 1 a n) e, por conseq��ncia, a quantidade de c�dulas preenchidas. A seguir h� n linhas, cada uma correspondendo a uma c�dula processada.

Cada linha cont�m n inteiros, onde o j-�simo inteiro da i-�sima linha � igual a 1, caso o j-�simo quadrado da c�dula i esteja preenchido (ou seja, o aluno de identificador i votou no aluno de identificador j); ou � igual a 0, caso contr�rio (o aluno de identificador i n�o votou no aluno de identificador j).

A entrada termina quando n = 0.

Sa�da
Para cada caso de teste, seu programa deve imprimir uma linha, contendo apenas um inteiro, correspondente � quantidade de votos recebidos pelo vencedor da elei��o.

*****************************************************************************************************/

#include <stdio.h>

int main()
{

    int mat[100][100];
    int n, i, j, pop, soma;

    scanf("%d", &n);

    while(n!=0)
    {   pop=0;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                scanf("%d", &mat[i][j]);

        for(i=0; i<n; i++)
        {
            soma = 0;
            for(j=0; j<n; j++)
                soma = soma + mat[j][i];
            if(soma>pop)
                pop=soma;
        }

        printf("%d\n", pop);
        scanf("%d", &n);
    }

    return 0;
}
