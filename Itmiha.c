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
