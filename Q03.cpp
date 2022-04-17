#include<stdio.h>
#include<conio.h>

int absoluto(int n);

int main()
{
    int num;
    for(int i = 1; i <= 5; i++)
    {
        printf("\nInforme %d* numero inteiro: ", i);
        scanf("%d", &num);
        printf("\nO valor absoluto de %d eh: %d ", num, absoluto(num));
    }
    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}
int absoluto(int n)
{
    if(n<0) return n*=-1;
    else    return n;
}