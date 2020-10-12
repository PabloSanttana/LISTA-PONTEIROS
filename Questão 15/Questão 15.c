#include <stdio.h>
//Defini��o de um tipo de fun��o void
typedef void funcaoFloat(float *x, int y);


// Fun��o que ordena o ponteiro
void ordenaPonteiro (float *vetorFloats, int tam){
    int i, j, ax;
    for(i=0; i<tam-1; i++) {

        for(j=tam-1;j>i;--j) {

                if(vetorFloats[j-1]>vetorFloats[j]){

                    ax = vetorFloats[j-1];
                    vetorFloats[j-1] = vetorFloats[j];
                    vetorFloats[j] = ax;
            }

        }
    }
}


int comparador(const void *a, const void *b) {
   return ( (int)a - (int)b );
}

int main()
{
    // Declara��o do ponteiroi para fun��o void
     funcaoFloat *ponteiroFuncao;
    float *ponteiroFloat;
    int tamanho;
    // Atribui��o da fun��o no ponteiro
     ponteiroFuncao = ordenaPonteiro;

    printf("Digite a tamanho do vetor\n");
    scanf("%i", &tamanho);
    ponteiroFloat = malloc(tamanho*sizeof(float));

    printf("Digite os numeros\n");

    for(int i=0;i<tamanho;i++) {
        scanf("%f", (ponteiroFloat + i) );
    }

    // Chama da fun��o pelo ponteiro
     (*ponteiroFuncao) (ponteiroFloat, tamanho);



     printf("Ordenado vetor\n");
    for(int i=0;i<tamanho;i++) {
        printf("%.2f, ", *(ponteiroFloat + i));
    }

    free(ponteiroFloat);


    return 0;
}
