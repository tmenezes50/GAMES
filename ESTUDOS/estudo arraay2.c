/* Estudos Array 2 */

/* Tratando arrays de caracteres como strings */

/*#include <stdio.h>

main(){
    char string1[20], string2[] = "string literal";
    int i;

    printf("Entre com uma string: ");
    scanf("%s", string1);
    printf("string1 eh: %s\nstring2 eh: %s\n"
        "string1 com espaco entre caracteres eh: \n", string1, string2);
    
    for (i = 0; string1[i] != '\0'; i++)
        printf("%c", string1[i]);

    printf("\n");

    return 0;

}*/

/* Os arrays static sao inicializados com zeros */
/*#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

main(){
    printf("Primeira chamada de cada funcao:\n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSegunda chamada de cada funcao:\n");
    staticArrayInit();
    automaticArrayInit();

    return 0;

}

/* função para demonstrar uma array local static */
/*void staticArrayInit(void)
{
    static int a[3];
    int i;

    printf("\nValores de staticArrayInit ao entrar:\n");

    for (i = 0; i <= 2; i++) printf("array1[%d] = %d\n", i, a[i]);

    printf("\nValores de sataticArrayInit ao sair:\n");

    for (i = 0; i <= 2; i++) printf("array1[%d] = %d\n", i, a[i] += 5);

}

/* função para demonstrar um array local automatic */
/*void automaticArrayInit(void)
{
    int a[3] = {1,2,3};
    int i;

    printf("\n\nValores de automaticArrayInit ao entrar:\n");

    for (i = 0; i <= 2; i++) printf("array2[%d] = %d\n", i, a[i]);

    printf("\n\nValores de automaticArrayInit ao sair:\n");

    for (i = 0; i <= 2; i++) printf("array2[%d] = %d\n", i, a[i] += 5);
}*/

/* O nome de um array e o mesmo que &array[0] */

/*#include <stdio.h>
main()
{
    char array[5];
    printf("array = %p\n&array[0] = %p\n", array, &array[0]);

    return 0;
}*/


/* Passando arrarys e elementos isolados de arrays para funções */

#include <stdio.h>
#define TAMANHO 5
j = 0;

void modificaArray(int [], int);
void modificaElemento(int);

main(){

int a[TAMANHO] =  {0, 1, 2, 3, 4}; int i;
printf("Efeitos de passar o array interio por meio de chamada por referencia: \n\n Os valores do array original sao: \n");

for (i = 0; i < TAMANHO; i++) printf("%3d", a[i]);

printf("\n");

modificaArray(a, TAMANHO);

printf("Os valores do array modificado sao:\n");
for (i = 0; i < TAMANHO; i++) printf("%3d", a[i]);

printf("\n\nEfeitos de passar elementos do array por meio de uma chamada por valor:\n\nO valor de a[3] eh %d\n", a[3]);

modificaElemento(a[3]);

printf("O valor de a[3] eh %d\n", a[3]);
return 0;

}

void modificaArray(int b[], int tamanho){

for (j = 0; j < tamanho; j++) b[j] *= 2;
}

void modificaElemento(int e){

printf("Valor em modificaElemento eh %d\n", e *=2);

}














