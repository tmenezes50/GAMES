/* ESTUDOS DE PONTEIROS */

/* Usando os operadores & e * */

/*#include <stdio.h>
main(){

int a; 
int *aPtr;
a = 7;
aPtr = &a;

printf("O endereco de a eh %p\nO valor de aPtr eh %p\n\n", &a, aPtr);

printf("O valor de a eh: %d\nO valor de *aPtr eh %d\n\n", a, *aPtr);

printf("Sabendo que * e & complementam-se mutuamente.\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);

return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
int main(){
    // Declara uma variável int contendo o valor 10 
    int count = 10;
    // Declara o ponteiro para um int 
    int *p;
    // Atribui ao ponteiro o endereço da variável int 
    p = &count;
    printf("Conteudo apontado por p: %d\n", *p);
    // Atribui um novo valor à posição de memória apontado por p 
    *p = 12;
    printf("Conteudo apontado por p: %d\n", *p);
    printf("Conteudo apontado por count: %d\n", count);

    system("pause");
    return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, *p1, x = 10;
    float y = 20.0;
    p = &x;
    printf("Conteudo apontado por p: %d\n", *p);
    p1 = p;
    printf("Conteudo apontado por p1: %d\n", *p1);
    p = &y;
    printf("Conteudo apontado por p: %d\n", *p);
    printf("Conteudo apontado por p: %f\n", *p);
    printf("Conteudo apontado por p: %f\n", *((float*)p));
    system("pause");
    return 0;
}
*/

/* Um ponteiro pode receber um valor hexadecimal representando um endereço de memória
diretamente. Isso é muito útil quando se trabalha, por exemplo, com microcontroladores.*/

/*#include <stdio.h>
#include <stdlib.h>
int main(){
    // Endereço hexadecimal da porta serial
    int *p = 0x3F8;
    // O valor em decimal é convertido para seu valor hexadecimal: 0x5DC
    int *p1 = 1500;
    printf("Endereco em p: %p\n", p);
    printf("Endereco em p1: %p\n", p1);
    system("pause");
    return 0;
}*/


/*
#include <stdio.h>
#include <stdlib.h>
int main(){
 int *p, *p1, x, y;
 p = &x;
 p1 = &y;
 if(p == p1)
 printf("Ponteiros iguais\n");
 else
 printf("Ponteiros diferentes\n");
 system("pause");
 return 0;
}*/



#include <stdio.h>
#include <stdlib.h>
main(){
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;
    printf("%p %p\n", p, p1);
    if(p > p1)
        printf("O ponteiro p aponta para um posicao a frente do ponteiro p1\n");
    else
        printf("O ponteiro p NAO aponta para um posicao a frente de p1\n");
    system("pause");
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
main(){
    int *p, *p1, x = 10, y = 20;
    p = &x;
    p1 = &y;
    if (*p > *p1)
        printf("O conteudo de p eh maior do que o conteudo de p1\n");
    else
        printf("O conteudo de p NAO eh maior do que oconteudo de p1\n");
    system("pause");
    return 0;
}*/