/* Estudos de Arrays */

/*#include <stdio.h>

int main(void){
char v[6]; int c;

for(c=0; c<6; c++) scanf("%c", &v[c]);


for (c=0; c<6; c++) printf("%c", v[c]);
return 0;

}*/


/*#include <stdio.h>

int main(void){
int n[10], i;
    for (i = 0; i <= 9; i++)
    scanf("%d", &n[i]);
    printf("%s%13s\n", "Elemento", "Valor");
    for(i = 0; i <= 9; i++) printf("%7d%13d\n", i, n[i]);

    return 0;
}*/

/*#include <stdio.h>

#define tamanho 10
main()
{
    int n[tamanho], i;

    for(i = 0; i < 10; i++) n[i] = 2 + 2*i;

    printf("%s%13s\n", "Elemento", "Valor");
    
    for(i = 0; i < 10; i++) printf("%8d%13d\n", i, n[i]);

    return 0;

}*/

/* Programa para imprimir histograma */

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

main()
{
    int a[TAMANHO];
    int i, j;
    srand((unsigned int)time(NULL));

    for (i = 0; i < TAMANHO; i++) a[i] = 1 + rand() %20;

    printf("%s%13s%17s\n", "Elemento", "Valor", "Histograma") ;

    for (i = 0; i < TAMANHO; i ++){
        printf("%8d%13d\t", i, a[i]);

        for (j = 1; j <= a[i]; j++) printf("%c", '*');

        printf("\n");
    }
    return 0;
}*/


/* Rolar um dado de seis faces 6000 vezes */

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 7

main()
{
    int face, jogada, frequencia[TAMANHO] = {0};

    srand(time(NULL));

    for (jogada = 1; jogada <= 6000; jogada++){
        face = rand() % 6+1;
        ++frequencia[face];
    }

    printf("%s%18s\n", "Face", "Frequencia");

    for (face = 1; face < TAMANHO; face++)
        printf("%4d%18d\n", face, frequencia[face]);
    return 0;
}*/