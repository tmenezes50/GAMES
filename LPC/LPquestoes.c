//soma random
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, a, b, s;
    printf("gerando somas aleatórias\n");
    for (i = 1; i <=50; i++){
        //gerando valores aleatórios
        a = rand() % 1000;
        b = rand() % 1000;
        s = a + b;
        printf("%d)\n+%d\n %d\n-----\n %d\n\n",i, a, b, s);
    }
    for (i = 1; i <= 20; i++){
        //gerando produtos aleatórios
        a = rand() % 1000;
        b = rand() % 20;
        s = a * b;
        printf("%d)\n%d\nx%d\n-----\n%d\n\n",i, a, b, s);
    }
    for (i = 1; i <= 20; i++){
        //gerando subtrações aleatórias 
        a = rand() %(1000+1 - 500)+ 500;
        b = rand() %(499+1 - 0) + 0;
        s = a - b;
        printf("%d)\n %d\n-%d\n-----\n %d\n\n",i, a, b, s);
    for (i = 1; i <= 20; i++){
        //gerando divisões aleatórias
        b = rand() %(9+1 - 1) + 1;
        a = rand() %(50 + 1 - 1) + 1;
        a = a * b;
        s = a / b;
        printf("%d)\n %d\n /%d\n-----\n %d\n\n",i, a, b, s);
    }
    }
    return 0;
}
