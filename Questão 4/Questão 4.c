#include <stdio.h>

int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
 // printf("%d \n", valor);  // foi  obtidaa a resposta esperadas 20 na variavel valor

    /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
 // printf("%.1f \n", temp); // foi  obtida a respostaa esperadas 29.0 na variavel valor;

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
//  printf("%c \n", aux); // foi  obtida a respostaa esperadaa ja que s� foi passado aletra P


   /* (d) */
  p3 = &nome[4];
  aux = *p3;
//  printf("%c \n", aux); // foi  obtida a respostaa esperadaa ja que s� foi passado aletra e


  /* (e) */
  p3 = nome;
 // printf("%c \n", *p3); // foi  obtida a respostaa esperadaa ja que s� foi passado o primeiro endere�o

   /* (f) */
  p3 = p3 +4;
 // printf("%c \n", *p3); // foi  obtida a respostaa esperadaa ja que s� pulamos 4 bloco de endere�o

 /* (g) */
  p3--;
 // printf("%c \n", *p3); // foi  obtida a respostaa esperadaa ja que s� voltamos um  bloco de endere�o



 /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
 // printf("%d \n", idade); //foi  obtida a respostaa esperadaa ja que s� passamos o primeiro endere�o



    /* (i) */
  p5 = p4 +1;
  idade = *p5;
 // printf("%d \n", idade); //foi  obtida a resposta esperadaa ja que passamo o valor do endere�o que estava em p5


   /* (j) */
  p4 = p5 +1;
  idade = *p4;
 // printf("%d \n", idade); //foi  obtida a resposta esperadaa ja que pegamos o proximo endere�o do vetor e passamos o valor para idade 27


  /* (l) */
  p4 = p4 -2;
  idade = *p4;
  //printf("%d \n", idade); //foi  obtida a resposta esperadaa ja que  voltamos 2 endere�o que esta quardando valor 31


   /* (m) */
  p5 = &vetor[2] - 1;
//  printf("%d \n", *p5); //foi  obtida a resposta esperadaa ja que voltei um endere�o do vetor ou jesa Vetor[1] == 45

 /* (n) */
  p5++;
//  printf("%d \n", *p5); //foi  obtida a resposta esperadaa ja que  andei um endere�o  pra frente que o valor e == 27
  return(0);

  return 0;
}


