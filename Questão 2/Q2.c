#include <stdio.h>


int main(){


int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

// p == 4094 ; *p+2 == 5+2 == 7 ;
// na expreção **&p == 5, &p == endereço do ponteiro, *&p == o endereço que o ponteiro aponta , **&p == o valor do endereço para onde o pontairo aponta
// 3**p == 3*(5) == 15
// **&p+4 == (5)+4 == 9

return 0;

}



