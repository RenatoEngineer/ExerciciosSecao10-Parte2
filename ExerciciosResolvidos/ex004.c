/*
 * ex004.c
 *
 *  Criado em: 3 de nov de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte2
 */

#include <stdio.h>

int main(){

	//Declaracao de Variaveis
	int inteiro;
	float real;

	printf("Digite um Valor Inteiro: ");
	fflush(stdout);
	scanf("%d", &inteiro);

	printf("Digite um Valor Real: ");
	fflush(stdout);
	scanf("%f", &real);

	//Declaracao de Ponteiros
	int *ptrInteiro = &inteiro;
	float *ptrReal = &real;

	printf("\n.:: Variavel Inteiro ::.\n");
	printf("Valor: %d\n", inteiro);
	printf("Endereco: %p\n", (void*)&inteiro);

	printf("\n.:: Variavel Real ::.\n");
	printf("Valor: %f\n", real);
	printf("Endereco: %p\n", (void*)&real);

	printf("\n.:: Ponteiro para Inteiro ::.\n");
	printf("Valor: %p\n", (void*)ptrInteiro);
	printf("Endereco: %p\n", (void*)&ptrInteiro);
	printf("Valor Apontado: %d\n", *ptrInteiro);

	printf("\n.:: Ponteiro para Real ::.\n");
	printf("Valor: %p\n", (void*)ptrReal);
	printf("Endereco: %p\n", (void*)&ptrReal);
	printf("Valor Apontado: %f\n", *ptrReal);

	return 0;
}

/*
 * Os valores apontados pelos ponteiros são
 * iguais aos valores das variáveis correspondentes,
 * enquanto os demais valores não são iguais.
 *
 */
