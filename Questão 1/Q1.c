#include <stdio.h>


int main(){

    int i=3, j = 5, *p, *q;

    p=&i;
    q=&j;

    // q == &i ? sim, mesmo endere�o
    // printf("p = %p, i = %p", p , &i);


    // *p - *q == -2, pois * pegar o valor que esta no ponteiro ou seja 3 - 5 == -2
     // printf("p = %d, q = %d", *p , *q);


    // na expre��o **&q, &q == endere�o do ponteiro, *&q == o endere�o que o ponteiro aponta , **&q == o valor do endere�o para onde o pontairo aponta
     //printf("p = %d", **&q);


    // 3-*p/*P +7 == 3 - 3/5 - 7 == -4



return 0;


}
