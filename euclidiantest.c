#include <stdio.h>
#include <math.h>

//Estrutura para armazenar as coordenadas de um ponto.
typedef struct{ 
    float x;
    float y;
} Ponto;
typedef float Ponto; 

int main(){
	Ponto pr, p1, p2, p3, p4, p5; //Estruturas para cada um dos pontos (p1,...,p5) e para o ponto de referência (pr).
	int k; //Número de vizinhos a serem considerados.
	float d1, d2, d3, d4, d5; //Armzenam as distâncias euclidianas entre cada ponto e pr.
    
        struct Ponto; //    float x1, x2, x3, x4, x5, y1, y2, y3, y4, y5, xpr, ypr;

    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);
    scanf("%f %f", &p3.x, &p3.y);
    scanf("%f %f", &p4.x, &p4.y);
    scanf("%f %f", &p5.x, &p5.y);
    scanf("%f %f", &pr.x, &pr.y);
    scanf("%d", &k);
    
    if (k<=0){
    scanf("%d", &k); 
    } else 
    
        d1 = sqrt(pow(p1.x - pr.x, 2) + (pow(y1 - ypr, 2));
        d2 = sqrt(pow(p2.x - pr.x, 2) + (pow(y2 - ypr, 2));
        d3 = sqrt(pow(p3.x - pr.x, 2) + (pow(y3 - ypr, 2));
        d4 = sqrt(pow(p4.x - pr.x, 2) + (pow(y4 - ypr, 2));
        d5 = sqrt(pow(p5.x - pr.x, 2) + (pow(y5 - ypr, 2));
        
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
