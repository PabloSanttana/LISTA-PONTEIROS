#include <stdio.h>
#include <stdlib.h>


int nl_nc(char a[]){

    int nlnc;

    printf("numero de %s = ", a);
    scanf("%d", &nlnc);

    return nlnc;

}

float **alorcar_Matriz(float **mat, int nl,int nc){

    mat = malloc(nl*sizeof(float*));

    mat[0] = malloc(nl*nc*sizeof(float));

    for(int i=1;i<nl;i++){
        mat[i] = mat[i-1]+nc; // fixa os ponteiros
    }

    return mat;

}
void libera_matriz(float **mat, int nl) {


    free(mat[0]); // libera primeiro a segunda dimensão

    free(mat); // libera a primeira dimensão
}

void peerncher_matriz(float **mat, int lines, int cols, char name){

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Matriz %c [%d][%d]: ",name, i,j);
            scanf("%f", &mat[i][j]);
        }
    }

}

void imprimir_Matriz(float **mat, int lines,int cols, char name){

    printf("\n\n resultado da Matriz %c .\n\n", name);
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("| %.2f ", mat[i][j]);
        }
        printf("| \n");
    }
}

void produto_matriz(float **matA, float **matB, float **matC, int linesA, int colsA, int colsB){

    float soma =0;

    for(int i=0; i<linesA;i++){

        for(int j=0;j<colsB; j++){
                soma = 0;
            for(int k=0;k<colsA;k++){

                soma = soma + matA[i][k] * matB[k][j];
            }

            matC[i][j] = soma;
        }
    }
}


int main(){

    int nlA,ncA,ncB;
    float **matrizA =NULL,**matrizB =NULL,**matrizC =NULL;

    nlA = nl_nc("linhas da matriz A");
    ncA = nl_nc("coluna da matriz A");
    ncB = nl_nc("coluna da matriz B");

    matrizA = alorcar_Matriz(matrizA,nlA,ncA);

    matrizB = alorcar_Matriz(matrizB,ncA,ncB);
    matrizC = alorcar_Matriz(matrizC,nlA,ncB);

    ///Preenchendo a matriz A.
    peerncher_matriz(matrizA,nlA,ncA,'A');

    printf("\n");
    ///Preenchendo a matriz B.
    peerncher_matriz(matrizB,ncA,ncB,'B');

    ///Imprimir na tela o resultado!!!
    imprimir_Matriz(matrizA,nlA,ncA,'A');

    ///Imprimir na tela o resultado!!!
    imprimir_Matriz(matrizB,ncA,ncB,'B');

    produto_matriz(matrizA,matrizB,matrizC,nlA,ncA,ncB);

    ///Imprimir na tela o resultado!!!
    printf("\n produto de AxB \n");
    imprimir_Matriz(matrizC,nlA,ncB,'C');

   libera_matriz(matrizA, nlA);
   libera_matriz(matrizB, ncA);
   libera_matriz(matrizC, nlA);


return 0;

}
