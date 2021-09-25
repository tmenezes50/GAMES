/* Exercícios de Ponteiros */


/* 1) Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço. */

/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, *p1, x, y;
    p = &x;                 // Atribuindo apontamento das variáveis
    p1 = &y;

    // Comparando endereços
    if (p > p1)
        printf("O endereco de p eh maior que endereco de p1: %p\n", p);
    else
        printf("O endereco de p1 eh maior que endereco de p: %p\n", p1);

    system("pause");
    return 0;
}
*/

/* 2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço. */

/*#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, *p1, x, y; // Declarando variáveis
    
    printf("Insira valor de x: ");
    scanf("%d", &x);                    // Atribuindo valores de x e y
    printf("\nInsira valor de y: ");
    scanf("%d", &y);

    // Atribuindo apontamento das variáveis
    p = &x;
    p1 = &y;

    // Comparado endereços 
    if (p > p1)
        printf("\nValor atribuido ao maior endereco eh: %d\n", *p);
    else
        printf("\nValor atribuido ao maior endereco eh: %d\n", *p1);

    system("pause");
    return 0;
}*/

/* 3) Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array. */

/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    float a[10], *ap;           // Criando variáveis
    int i;

    for (i = 0; i < 10; i ++){
        ap = &a[i];
        printf("%p\n", ap);
    }

    system("pause");
    return 0;
}
*/

/* 4) Crie um programa que contenha uma matriz de float contendo três linhas e três
colunas. Imprima o endereço de cada posição dessa matriz. */

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a[3][3], *ap;
    int i, j;               // Criando Variáveis
    srand(time(NULL));

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            a[i][j] = 1 + rand() % 20;
            ap = &a[i][j];
            printf("a[%d][%d] = %3d -> %p\n", i , j, a[i][j], ap);

        }
    }
    system("pause");
    return 0;
}*/

/* 5) Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido. */

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a[5], *ap, i = 0;
    srand(time(NULL));

    for (i = 0; i < 5; i++){
        a[i] = 1 + rand() % 70;
        ap = &a[i];
        printf("%d\n", *ap);
        a[i] = *ap * 2;
    }

    for (i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);
    

    system("pause");
    return 0;
}
*/