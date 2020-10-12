#include <stdio.h>

int main(){

    int x[4];
    float f[4];
    double d[4];
    char c[4];

    printf("INT \n");
    for(int i=0; i<4;i++){
         printf("%d \n", &x[i]);
    }
     printf("FLOAT \n");
     for(int i=0; i<4;i++){
         printf("%d \n", &f[i]);
    }
     printf("DOUBLE \n");
     for(int i=0; i<4;i++){
         printf("%d \n", &d[i]);
    }
    printf("CHAR \n");
     for(int i=0; i<4;i++){
         printf("%d \n", &c[i]);
    }


    // a respota é paracida com que idealizei na questão anterior, colouquei %d para melhor comparação

return 0;
}
