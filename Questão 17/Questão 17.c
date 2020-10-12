
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

int somar_vetor(char a[],char b[],char c[], int tam){

   float *v1,*v2,*v3;

   alorcar_vetor(&v1,tam);
   if(v1 == NULL){
        printf("Erro na alocação do vetor com nome : %s \n",a);
        return 404;
    }

   alorcar_vetor(&v2,tam);
   if(v2 == NULL){
         printf("Erro na alocação do vetor com nome : %s \n",b);
        return 404;
    }

   alorcar_vetor(&v3,tam);

   if(v3 == NULL){
         printf("Erro na alocação do vetor com nome : %s \n",c);
        return 404;
    }

      printf("preencher o vetor: %s \n",a);
      preencher_vetor(v1,tam);

      printf("preencher o vetor: %s \n",b);
      preencher_vetor(v2,tam);


      for(int i=0;i<tam;i++){
        v3[i] = v1[i]+v2[i];
      }

        printf("valores do vetor %s \n",c);
        for(int i=0;i<tam;i++){
            printf("%2.f, ",v3[i]);
        }



free(v1);
free(v2);
free(v3);
return 0;
}


int main(){

    int tam = 0;
    char nome01[21],nome02[21],nome03[21];

    printf("digite o primeiro nome do vetor \n");
        fgets(nome01,21,stdin); // stdin pegar do teclado

     printf("digite o segundo nome do vetor \n");
        fgets(nome02,21,stdin); // stdin pegar do teclado

     printf("digite o terceiro nome do vetor \n");
        fgets(nome03,21,stdin); // stdin pegar do teclado

        printf("tamanho do vetor \n");
        scanf("%d",&tam);

    somar_vetor(nome01,nome02,nome03,tam);

    return 0;

}
