#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int altura, linha, coluna, espacos, asteriscos;
    float base, area;

    
    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);  
    base = altura;
    for (linha = 1; linha <= altura; linha++) {
        espacos = altura - linha;
        asteriscos = 2 * linha - 1;    
        for (coluna = 1; coluna <= espacos; coluna++) {
            printf(" ");
        } 
        for (coluna = 1; coluna <= asteriscos; coluna++) {
            printf("*");
        }
        printf("\n");
    }
    area = (base * altura) / 2.0;
    printf("A area do triangulo e: %.2f\n", area);
	return 0;
}
