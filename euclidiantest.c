#include <stdio.h>
#include <math.h>

//Estrutura para armazenar as coordenadas de um ponto.
typedef struct ponto
    { 
        float x;
        float y;
    } Ponto;  

int main(){
	Ponto pr, p1, p2, p3, p4, p5; //Estruturas para cada um dos pontos (p1,...,p5) e para o ponto de referência (pr).
	int k; //Número de vizinhos a serem considerados.
	float d1, d2, d3, d4, d5; //Armzenam as distâncias euclidianas entre cada ponto e pr.
    
        scanf("%f %f", &p1.x, &p1.y);
        scanf("%f %f", &p2.x, &p2.y);
        scanf("%f %f", &p3.x, &p3.y);
        scanf("%f %f", &p4.x, &p4.y);
        scanf("%f %f", &p5.x, &p5.y);
        scanf("%f %f", &pr.x, &pr.y);
    
    
    do 
        scanf("%d", &k);
    while (k<0); 
    
        d1 = sqrt(pow(p1.x - pr.x, 2) + (pow(p1.y - pr.y, 2)));
        d2 = sqrt(pow(p2.x - pr.x, 2) + (pow(p2.y - pr.y, 2)));
        d3 = sqrt(pow(p3.x - pr.x, 2) + (pow(p3.y - pr.y, 2)));
        d4 = sqrt(pow(p4.x - pr.x, 2) + (pow(p4.y - pr.y, 2)));
        d5 = sqrt(pow(p5.x - pr.x, 2) + (pow(p5.y - pr.y, 2)));
     
               // fmax(x, y);
               // fmin(x, y);
		// FALTA ORDENAR!!!!!!!!
    printf("%.2f %.2f\n", p1.x, p1.y);
        printf("%.2f\n", d1);
    printf("%.2f %.2f\n", p2.x, p2.y);
        printf("%.2f\n", d2);
    printf("%.2f %.2f\n", p3.x, p3.y);
        printf("%.2f\n", d3);
    printf("%.2f %.2f\n", p4.x, p4.y);
        printf("%.2f\n", d4);
    printf("%.2f %.2f\n", p5.x, p5.y);
        printf("%.2f\n", d5);

        

	return 0;
}
