\****************************************************************************

FLOWER10 - Flores florescem da Fran�a

Fiona sempre amou poesia, e recentemente descobriu uma forma po�tica fascinante. Tautogramas s�o um caso especial de alitera��o, que � a ocorr�ncia da mesma letra no in�cio de palavras adjacentes. Em particular, uma senten�a � um tautograma se todas suas palavras come�am com a mesma letra.

Por exemplo, as seguintes senten�as s�o tautogramas:

Flowers Flourish from France
Sam Simmonds speaks softly
Peter pIckEd pePPers
truly tautograms triumph

Fiona quer deslumbrar seu namorado com uma carta rom�ntica repleta desse tipo de senten�as. Por favor, ajude Fiona a verificar se cada senten�a que ela escreveu � um tautograma ou n�o.

Entrada
Cada caso de teste � dado em uma �nica linha que cont�m uma frase. Uma frase consiste de uma sequ�ncia de no m�ximo 50 palavras separadas por espa�os simples. Uma palavra � uma sequ�ncia de no m�ximo 20 letras do alfabeto ingl�s (mai�sculas e min�sculas). Uma palavra cont�m ao menos uma letra e uma senten�a cont�m ao menos uma palavra.

O �ltimo caso de teste � seguido de uma linha contendo apenas o caractere '*' (asterisco).

Sa�da
Para cada caso de teste, imprima uma �nica linha contendo o caractere 'Y' se a senten�a � um tautograma, ou um 'N' caso contr�rio.

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
