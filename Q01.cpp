#include<stdio.h>
#include<math.h>
#include<conio.h>

float cal_distancia(float PXa, float PXb, float PYa, float PYb);

int main(){

    float Xa, Ya, Xb, Yb;
    
    printf("\nInforme as coordenadas do primeira ponto: ");
    scanf("%f %f", &Xa, &Ya);

    printf("\nInforme as coordenadas do segundo ponto: ");
    scanf("%f %f", &Xb, &Yb);
    
    float res = cal_distancia(Xa, Xb, Ya, Yb);

    printf("\nA distancia entre os (%.2f, %.2f) e (%.2f, %.2f) = %.2f ", Xa, Ya, Xb, Yb, res);

    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}
float cal_distancia(float PXa, float PXb, float PYa, float PYb){

float resul = sqrt(pow((PXa-PXb),2) + pow((PYa-PYb),2));

return resul;
}