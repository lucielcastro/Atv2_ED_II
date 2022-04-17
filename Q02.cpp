#include <stdio.h>
#include<conio.h>

int potencia(int base, int expo);

int main(){

    int b, e;

    printf("\nInforme um valor inteiro para a base e outro para o expoente, respectivamente: ");
    scanf("%d %d", &b, &e);
    
    int res = potencia(b, e);

    printf("\n%d elevado %d eh igual a %d", b, e, res);
    
    printf("\nPressione qualquer valor para finalizar!");
    getch();
}
int potencia(int base, int expo){

int tmp, i;
tmp = 1; 
while(i < expo){
tmp *= base;
i++;
}
return tmp;
}