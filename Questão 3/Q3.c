
#include <stdio.h>


int main(){

    int i=5,j=7,*p,*q;


p = i;
q = &j;
p = &*&i;
printf("%d",   (*p)++ + *q);
//i = (*&)j;
i = *&j;
i = *&*&j;
q = *p;
i = (*p)++ + *q;



    return 0;


}
