
/* Exemplos de escopo */

#include <stdio.h>

void a(void); /* protótipo de função */
void b(void); /* protótipo de função */
void c(void); /* protótipo de função */

int x = 1;  /* variável global */

int main(){
int x =5; /* variável local em main */
printf("x local no escopo externo de main eh %d\n", x);
{   /* inicando novo escopo */
    int x = 7;
    printf("x local no escopo interno de main eh %d\n", x);
}   /* encerra novo escopo */
printf("x local no escopo externo de main eh %d\n", x);
a();    /* a tem x local automático */
b();    /* b tem x local estático */
c();    /* c tem x global */
a();    /* a reinicial x local automático */
b();    /* x local estático conserva seu valor anterior */
c();    /* x global também conserva seu valor anterior */
printf("x local em main eh %d\n", x); return 0;
}

void a(void){
int x = 25; /* inicia sempre que a é chamada */
printf("\nx local em a eh %d depois de entrar em a\n", x);
++x;
printf("x local em a eh %d antes de sair de a\n", x);
}

void b(void){
static int x = 50; /* apenas inicialização estática */
/* primeira vez que b é chamada */
printf("\nx local estático eh %d ao entrar em b\n", x);
++x;
printf("x local estático eh %d ao sair de b\n", x);
}

void c(void){
printf("\nx global eh %d ao entrar em c\n", x);
x *= 10;
printf("x global eh %d ao sair de c\n", x);
}
