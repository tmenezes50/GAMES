/* Estudos de struct */

/*#include <stdio.h>
#include <stdlib.h>
struct ponto{
    int x, y;
};
int main(){
    printf("Tamanho char: %d\n", sizeof(char));
    printf("Tamanho int: %d\n", sizeof(int));
    printf("Tamanho float: %d\n", sizeof(float));
    printf("Tamanho double: %d\n", sizeof(double));
    printf("Tamanho struct ponto: %d\n", sizeof(struct ponto));
    int x;
    double y;
    printf("Tamanho da variavel x: %d\n", sizeof x);
    printf("Tamanho da variavel y: %d\n", sizeof y);
    system("pause");
    return 0;

}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *) malloc(5*sizeof(int));
    if(p == NULL){
        printf("Erro: Memoria Insuficiente!\n");
        system ("pause");
        exit(1);
    }
    int i;
    for (i = 0; i < 5; i ++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &p[i]);
    }
    system("pause");
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int *p, *p1;
    p = (int *) malloc(5*sizeof(int));
    p1 = (int *) calloc(5,sizeof(int));
    printf("calloc \t\t malloc\n");
    for (i=0; i<5; i++)
        printf("p1[%d]=%d \t p[%d] = %d\n", i, p1[i], i, p[i]);
    system("pause");
    return 0;
}*/

