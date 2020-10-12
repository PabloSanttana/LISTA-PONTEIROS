#include <stdio.h>


int main(){

    int i=3, j = 5, *p, *q;

    p=&i;
    q=&j;

    // q == &i ? sim, mesmo endereço
    // printf("p = %p, i = %p", p , &i);


    // *p - *q == -2, pois * pegar o valor que esta no ponteiro ou seja 3 - 5 == -2
     // printf("p = %d, q = %d", *p , *q);


    // na expreção **&q, &q == endereço do ponteiro, *&q == o endereço que o ponteiro aponta , **&q == o valor do endereço para onde o pontairo aponta
     //printf("p = %d", **&q);


    // 3-*p/*P +7 == 3 - 3/5 - 7 == -4



return 0;


}
