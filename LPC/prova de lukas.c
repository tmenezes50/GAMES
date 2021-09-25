#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, aux;
    int *Lucro_p, *Custo_p;
    int X, N, p[100];
    int lucro_t = 0;


    printf("Insira valores para locacao dinamica de lucros e custos: ");
    scanf("%d", &N);

    Lucro_p = (int ) malloc(Nsizeof(int));
    if (Lucro_p == NULL){
        printf("Erro: Memoria excedida para locacao de lucros!\n");
        exit(1);
    }

    Custo_p = (int ) malloc(Nsizeof(int));
    if (Custo_p == NULL){
        printf("Erro: Memoria excedida para locacao de custo!\n");
        exit(1);
    }

    printf("* Insira valores para Lucros: ");
    for ( i = 0 ; i < N ; i++ ){
        printf("\n- Valor de Lucro[%d]: \n", i);
        scanf("%d", &Lucro_p[i]);
    }

        printf("* Insira valores para Custos: ");
    for ( i = 0 ; i < N ; i++ ){
        printf("\n- Valor de Custos[%d]: \n", i);
        scanf("%d", &Custo_p[i]);
    }

    printf("- Valor de investimento = ");
    scanf("%d", &X);

    printf("'Lucros  -  'Custos\n");
    for( i = 0 ; i < N ; i++ ){
        p[i] = i;
        printf("%d \t- %4d\n", Lucro_p[i], Custo_p[i]);
    }

    for( i = 0 ; i < N ; i++ ){
        for( j = i + 1 ; j < N ; j++ ){
            if((Lucro_p[j] - Custo_p[j]) > (Lucro_p[i] - Custo_p[i])){
                aux = Lucro_p[i];
                Lucro_p[i] = Lucro_p[j];
                Lucro_p[j] = aux;

                aux = Custo_p[i];
                Custo_p[i] = Custo_p[j];
                Custo_p[j] = aux;

                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }

    i = 0 ;

    printf("\n*- As Acoes escolhidas foram: ");

    while( X > Custo_p[i] ){
        X -= Custo_p[i];
        lucro_t += Lucro_p[i];
        printf("%d ", p[i]);
        i++;
    }

     printf("\n- Lucro total eh: %d\n", lucro_t);

    return 0;
}