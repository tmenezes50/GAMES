/* Função fatorial */

#include <stdio.h>
long fatorial(long);

int main(void){
int n;
scanf("%d", &n);
printf("%d\n", fatorial(n));
    
return 0;
}

/* Definição recursiva da função fatorial */

long fatorial(long numero){
if (numero <= 1) return 1;
else return (numero * fatorial(numero - 1));
}