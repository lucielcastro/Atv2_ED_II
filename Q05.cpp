#include <stdio.h>
#include <math.h> 
#include <string>
#include <conio.h>

float cal_Media(float no1 , float no2, float no3);

int main(){
	
 float n1, n2, n3;
 
 printf("Informe  nota 1:\n");
 scanf(" %f", &n1);
 
 printf("Informe tres nota 2:\n");
 scanf("%f",&n2);
 
 printf("Informe tres nota 3:\n");
 scanf("%f",&n3);

 float res = cal_Media(n1, n2, n3);
 
 printf("A media eh: %.2f\n", res);
 
 printf("\nPressione qualquer tecla para finalizar!");
 getch();
}
float cal_Media(float no1 , float no2, float no3)
{
	char a;
	float media_A, media_P, media_H;
	int p1 = 5, p2 = 3, p3 = 2;
	int soma_p = p1 + p2 + p3;
	float na = p1*no1, nb = p2*no2, nc = p3*no3;
    int i = 2;
    int mmc1 = 1;
    float n1 = no1;
    float n2 = no2;
    float n3 = no3;

    printf("\n\t---- QUAL MEDIA DESEJA CALCULAR? ----\n");
    printf("\n\t------- A - Media aritmetica --------");
    printf("\n\t------- P - Media Ponderada ---------");
    printf("\n\t------- H - Media Harmonica ---------\n");
    scanf("%s", &a);
    
    while(a!='A' && a!='a' && a!='p' && a!='P' && a!='h' && a!='H')
    {	
 	     printf("\n\tOpcao invalida, informe novamente!\n");
         printf("\n\t------- A - Media aritmetica --------");
         printf("\n\t------- P - Media Ponderada ---------");
         printf("\n\t------- H - Media Harmonica -------\n");
         scanf(" %s", &a);
    }   
    switch (a)
    {
         case 'a':
         case 'A': media_A = (no1 + no2 + no3)/3;
 	     printf("med arit %.2f:\n", media_A);
         return media_A;                break;
         case 'p':
         case 'P': media_P = ((na+nb+nc)/soma_p);
         printf("med ponderada %.2f:\n", media_P);
         return media_P;                 break;
         case 'h':
         case 'H': int md1 = (int)no1 % i;
         int md2 = (int)no2 % i;
         int md3 = (int)no3 % i;
        
         if(md1 == 0){no1 /= i;}
         if(md2 == 0){no2 /= i;}
         if(md3 == 0){no3 /= i;}
 
         if(md1 && md2 && md3){ i += 1; }
         else{ mmc1 *= i; }
    
         printf("As 3 notas = %.2f %.2f %.2f\n", n1, n2, n3);
         printf("O mmc dos 3 notas eh: %d\n", mmc1); 
         float vt2 = mmc1/n1;
	     float vt3 = mmc1/n2;
	     float vt4 = mmc1/n3; //media harm part 1
	     printf("media harm part 1 = %.2f %.2f %.2f\n", vt2, vt3, vt4); 
	     float soma =vt2+vt3+vt4;
	     printf("Soma: %.2f\n", soma); 
         float media_H = (mmc1*3)/soma; //media harm part 1
         printf("Med harm eh: %.2f\n", media_H); 
        return media_H; break;
    }
}