//Prova LP
//Aluno: Thiago Chaves Menezes

//Questão 1

#include <stdio.h>
/*int funcao_rec(int n);
int funcao_rec(int n){
	if (n==1) return 0;
	if (n==2) return 1;
	if (n==3) return 2;
	return (funcao_rec(n-1) +funcao_rec(n-2)+funcao_rec(n-3));
}
//Testando A Função
int main() {
int n;
scanf("%d", &n);    
printf("%d\n", funcao_rec(n));
}*/

//Questão 2

int main(void){
int n, i, a, aux;
printf("Insira tamanho do array: ");
scanf("%d", &n);
int array[n];
printf("Insira %d elementos:\n", n);
for (i=0; i<n; i++){
    printf("elemento - %d: ", i);
    scanf("%d", &array[i]);
}
printf("\nInsira a posição onde excluir:");
scanf("%d", &a);
for (i=0; i < n; i++){

 for (a; a<n; a++) {
    aux = array[a];
    array[a]= array[a+1];
    array[a+1] = array[a];
    }
}
printf("Array após a remoção:\n");
for(i=0; i<n-1; i++) printf("%d\t", array[i]);
printf("\n");
    
return 0;
}
