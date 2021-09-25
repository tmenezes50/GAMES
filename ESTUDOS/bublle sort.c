/* bublle sort */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
int i;
srand(time(NULL));

scanf("%d", &n);
int a[n];

for (i = 0; i < n; i++){
    a[i] = 1 + rand() %  500;
    printf("a[%d] = %d  ", i, a[i]);
}

printf("\n\n");

BublleSort(a, n);

for (i = 0; i < n; i++) printf("a[%d] = %d  ", i, a[i]);

return 0;

}


void BublleSort(int a[], int tamanho){
int i, j, aux;

for (i = 0; i < tamanho - 1; i++){

    for (j = i + 1; j < tamanho; j++){

        if (a[i] >= a[j]){

            aux = a[i];
            a[i] = a[j];
            a[j] = aux;

        }
    }
}

}