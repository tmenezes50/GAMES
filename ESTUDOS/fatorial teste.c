#include <stdio.h>

int main(){
int  i, r=1;
scanf("%d", &i);
for(r; r <= i; r++){
    r *= r;
    printf("%d", r);
}
printf("%d\n", i);
return 0;
}