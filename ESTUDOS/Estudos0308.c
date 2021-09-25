/*#include <stdio.h>

int main(void){
float l, kml; int km;
while (l>0){
printf("Entre com os litros consumidos (-1 para finalizar): ");
scanf("%f", &l);
if (l<0) break;
printf("Entre com os km percorridos: ");
scanf("%d", &km);
kml = km/l;
printf("A taxa km/litro para o tanque foi %f\n", kml);
}
return 0;
}*/

/*
#include <stdio.h>

int main(){
int contador = 1;
while (contador <= 10){
    printf("%s\n", contador %2? "****" : "++++++++");
    ++contador;
}
return 0;
}*/

/*#include <stdio.h>

main(){
int linha = 10, coluna;
while (linha>=1){ coluna = 1;
    while (coluna <= 10){
        printf("%s", linha % 2 ? "<":">");
        ++coluna;
    }
    --linha; printf("\n");
}
return 0;
}*/



/*#include<stdio.h>

int main(){
int i, j, n=12, p;
for(i=0; i<n; i++){
    for(j=0; j<n; j++) {
        if (i==0 || i == n-1) 
        printf("*");
        if (i>0 && i<n-1) 
        printf("%s", (j>0 && j<n-1)? " " : "*");
    
    }
    printf("\n");
}
return 0;
}*/


/*int funsa(int n){
if (n == 1) return 1;
if (n>1) return (3*(funsa(n-1)) + 4);
}

int main(){
int n;
scanf("%d", &n);
printf("%d\n", funsa(n));
}*/

#include <stdio.h>
#include <stdlib.h>

int main(){
int array[12][12];
int i, j;
for(i = 0; i < 12; i ++){
    for(j = 0; j < 12; i++){
    if (i==0 || i == 11) array[i][j] = 1;
    }
}


return 0;
}
