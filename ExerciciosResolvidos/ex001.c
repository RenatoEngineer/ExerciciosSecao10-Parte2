/*
 * ex001.c
 *
 *  Criado em: 30 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte2
 */

#include <stdio.h>
#include <math.h>

//Definicao da Estrutura ponto2d
struct ponto2d{
	float x;
	float y;
	float z;
};

int main(){

	//Declaracao das Estruturas ponto_inicial e ponto_final
	struct ponto2d ponto_inicial, ponto_final;

	//Declaracao de ponteiros para as estruturas ponto_inicial e ponto_final
	struct ponto2d *ptr_ponto_inicial = &ponto_inicial;
	struct ponto2d *ptr_ponto_final = &ponto_final;

	int escolha;
	float distancia;

	while (1){
		printf("\n.:: MENU ::.\n");
		printf("[1] - Digitar o Valor do Primeiro Ponto\n");
		printf("[2] - Digitar os Valores do Segundo Ponto\n");
		printf("[3] - Mostrar a Distancia entre os Pontos\n");
		printf("[4] - Sair\n");
		printf(".:: Escolha uma Opcao ::.\n ");
		fflush(stdout);
		scanf("%d", &escolha);

		switch (escolha){
		case 1:
			printf(".:: Digite as Coordenadas do Primeiro Ponto ::.\n");
			printf("x: ");
			fflush(stdout);
			scanf("%f", &ptr_ponto_inicial->x);

			printf("y: ");
			fflush(stdout);
			scanf("%f", &ptr_ponto_inicial->y);

			printf("z: ");
			fflush(stdout);
			scanf("%f", &ptr_ponto_inicial->z);

			break;

		case 2:
			printf(".:: Digite as Coordenadas do Segundo Ponto ::.\n");
			printf("x: ");
			fflush(stdout);
			scanf("%f", &ptr_ponto_final->x);

			printf("y: ");
			fflush(stdout);
			scanf("%f", &ptr_ponto_final->y);

			printf("z: ");
			fflush(stdout);
			scanf("%f", &ptr_ponto_final->z);

			break;

		case 3:
			distancia = sqrt(pow(ptr_ponto_final->x - ptr_ponto_inicial->x, 2) + pow(ptr_ponto_final->y - ptr_ponto_inicial->y, 2) + pow(ptr_ponto_final->z - ptr_ponto_inicial->z, 2));
			printf("A Distancia entre os Pontos e: %.2f\n", distancia);

			break;

		case 4:
			printf("Saindo do Programa!!!\n");
			return 0;

		default:
			printf("Opcao Invalida!!! Tente Novamente!!!\n");
		}
	}

	return 0;
}
