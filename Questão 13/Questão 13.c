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

    float *v;
    int tam = 0;

    printf("quanto numeros deseja inserir? \n");
    scanf("%d",&tam);

    alorcar_vetor(&v,tam);

    if(v == NULL){
        return 404;
    }

    preencher_vetor(v,tam);
    ordena_vetor(v,tam);

    printf("ordenaddo \n");

    for(int i=0;i<tam;i++){
        printf("%.2f \n",v[i]);
    }



free(v);
return 0;

}
