
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void alorcar_vetor(float **vet, int n){

    *vet = (float *) malloc(n*sizeof(float));

}

void preencher_vetor(float *vet, int n){

    printf("digite os numeros maximo = %d \n", n);

    for(int i=0; i<n;i++){
         scanf("%f",&vet[i]);
    }


}

int comparar (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
   // funcção para ordenação
    //Valor maior do que zero: se o primeiro valor for maior do que o segundo.
    //Valor menor do que zero: se o primeiro valor for menor do que o segundo.
}

void ordena_vetor(float *vet, int n){
    float ax;
    for(int i=0;i<n;i++){

            for( int j =0;j<n;j++){

                if(vet[i]<vet[j]){

                    ax = vet[i];
                    vet[i] = vet[j];
                    vet[j] = ax;
                }
            }
    }

}


int main(){

    // coloquei dessa forma para ter uma melhor observações do time entre as funções

    float *v, vetor[5000], tempo, t_init,t_fim;
    int tam = 5000;
    clock_t Ticks[4];

    for(int i=0; i<tam;i++){
        vetor[i] = 5000 - i;
    }
    v = vetor;

    Ticks[0] = clock();

  //  qsort(v,tam, sizeof(float), comparar); // qsort e bem mais rapido que a função ordena_vetor. com 5000 elemento no vetor foi tão rapido que não deu para medir ficou com 0ms

 //   ordena_vetor(v,tam) // com 5000 elementos no vetor durou 65ms para processar;

     Ticks[1] = clock();

    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto usando : %g ms. \n", Tempo);

    printf("ordenaddo \n");



//free(v);
return 0;

}
