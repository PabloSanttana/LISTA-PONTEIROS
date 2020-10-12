
#include <stdio.h>
#include <stdlib.h>

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


int main(){

    float *v;
    int tam = 0;

    printf("quanto numeros deseja inserir? \n");
    scanf("%d",&tam);

    // alocando memoria para o vetor
    alorcar_vetor(&v,tam);
    // verificando se o alocamento de menoria foi realizado com sucesso
    if(v == NULL){
        return 404;
    }
    // preencher o vertor
    preencher_vetor(v,tam);

    // usar a função qsort para ordenar o vetor com a função auxiliar de comparação

    qsort(v,tam, sizeof(float), comparar);


    printf("ordenaddo \n");
    // imprimir o vetor
    for(int i=0;i<tam;i++){
        printf("%.2f \n",v[i]);
    }



free(v);
return 0;

}
