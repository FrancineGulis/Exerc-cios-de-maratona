\****************************************************************************

FLOWER10 - Flores florescem da França

Fiona sempre amou poesia, e recentemente descobriu uma forma poética fascinante. Tautogramas são um caso especial de aliteração, 
que é a ocorrência da mesma letra no início de palavras adjacentes. Em particular, uma sentença é um tautograma se todas suas 
palavras começam com a mesma letra.

Por exemplo, as seguintes sentenças são tautogramas:

Flowers Flourish from France
Sam Simmonds speaks softly
Peter pIckEd pePPers
truly tautograms triumph

Fiona quer deslumbrar seu namorado com uma carta romântica repleta desse tipo de sentenças. Por favor, ajude Fiona a verificar
se cada sentença que ela escreveu é um tautograma ou não.

Entrada
Cada caso de teste é dado em uma única linha que contém uma frase. Uma frase consiste de uma sequência de no máximo 50 palavras
separadas por espaços simples. Uma palavra é uma sequência de no máximo 20 letras do alfabeto inglês (maiúsculas e minúsculas).
Uma palavra contém ao menos uma letra e uma sentença contém ao menos uma palavra.

O último caso de teste é seguido de uma linha contendo apenas o caractere '*' (asterisco).

Saída
Para cada caso de teste, imprima uma única linha contendo o caractere 'Y' se a sentença é um tautograma, ou um 'N' caso contrário.

***************************************************************************/


#include <stdio.h>


int main(){

    char palavra[21], letra;

    while (scanf("%s", palavra)){
        printf("%c", palavra[0]);

        if(palavra[0]=='*')
            break;
    }
    printf("Acabou");

return 0;
}



/*int main(){

    char frase[150], letra;
    int i, j;

    scanf("%s", frase);

    while(frase[0]!='*'){
        i=0;
        j=0;
        letra = frase[0];

        while(frase[i]!='\0'){
            if(frase[i]==' ')
                if(frase[0]!=letra){
                    printf("N\n");
                    j=1;
                    break;
                }
                i++;
        }
        if(j==0)
            printf("Y\n");

        scanf("%s", frase);
    }

return 0;
}*/



/*int main(){

    char frase[150], letra;
    int j;

    scanf("%s", frase);

    while(frase[0]!='*'){
        j=0;
        letra = frase[0];

        while(scanf("%s", frase)!=EOF){
                if(frase[0]!=letra){
                    printf("N\n");
                    j=1;
                    break;
                }
        }
        if(j==0)
            printf("Y\n");

        scanf("%s", frase);
    }

return 0;
}*/
