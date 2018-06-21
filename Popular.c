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
