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
