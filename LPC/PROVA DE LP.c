/* Aluno: Thiago Chaves Menezes */
/* Prova de LP */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, aux, *lp, *cp;  //lp[7]={70, 20, 29, 37, 7, 5, 10}, cp[7]={31, 21, 20, 19, 4, 3, 6},
    int x, n, p[20], lucro = 0;
    FILE *pont_arq;

    /* Criando a alocação dinâmica */

    printf("Insira valores para locacao dinamica de lucros e custos: ");
    scanf("%d", &n);


    lp = (int *) malloc(n*sizeof(int));
    if (lp == NULL){
        printf("Erro: Memoria Insuficiente para locacao de lucros!\n");    /* Mensagem de erro caso a alocação exceda espaço de memória */
        exit(1);
    }

    cp = (int *) malloc(n*sizeof(int));
    if (cp == NULL){
        printf("Erro: Memoria Insuficiente para locacao de custo!\n");    /* Mensagem de erro caso a alocação exceda espaço de memória */
        exit(1);
    }

    p = (int *) malloc(n*sizeof(int));

    printf("Insira valores para lucros: ");
    for (i = 0; i < n; i++){
        printf("Valor de Lucro[%d]: \n", i);    /* Inserindo valores de lucro */
        scanf("%d", &lp[i]);
    }
    printf("Insira valores para custos: ");
    for (i = 0; i < n; i++){ 
        printf("Valor de Custos[%d]: \n", i);   /* Inserindo valores de custo */
        scanf("%d", &cp[i]);
    }

    printf("Valor de investimento = ");
    scanf("%d", &x);                            /* Inserindo Valor do investimento */

    printf("Lucros  -   Custos\n");
    for(i = 0;i < n; i++){
        p[n] = i;                               /* Printando o resultado */
        printf("%d \t- %4d\n", lp[i], cp[i]);
    }

    /* Organizando vetor entre menor custo para valor de lucro */

    for(i = 0; i < n; i++){
        for(j=i + 1;j < n; j++){
            if((lp[i] - cp[i]) < (lp[j] - cp[j])){
                aux = lp[i];
                lp[i] = lp[j];    /* Utilizando método bublle sort */
                lp[j] = aux;

                aux = p[i];
                p[i] = p[j];
                p[j] = aux;

                aux = cp[i];
                cp[i] = cp[j];
                cp[j] = aux;
    
            }
        }
    }
    printf("\nAcoes escolhidas: ");
    i = 0;
    while(x > cp[i]){
        x -= cp[i];
        lucro += lp[i]; 
        printf("%d ", p[i]);
        i++;
    }

    printf("\nLucro total: %d\n", lucro);

    /* Criando arquivo txt */
    fprintf(pont_arq,"Lucro total: %d\n", lucro);
    fclose(pont_arq);
    return 0;
}