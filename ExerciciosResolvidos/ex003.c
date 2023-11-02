/*
 * ex003.c
 *
 *  Criado em: 2 de nov de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte2
 */

#include <stdio.h>

int main(){
	//Declaracao das Variaveis
	int inteiro;
	float real;
	char caractere;

	//Declaracao dos Ponteiros
	int *ptrInteiro;
	float *ptrReal;
	char *ptrCaractere;

	printf("Digite um Valor Inteiro: ");
	fflush(stdout);
	scanf("%d", &inteiro);

	printf("Digite um Valor Real: ");
	fflush(stdout);
	scanf("%f", &real);

	printf("Digite um Caractere: ");
	fflush(stdout);
	scanf(" %c", &caractere); //Espaco em branco antes do %c para evitar leitura de caracteres em excesso

	//Atribuindo os Enderecos das Variaveis aos Ponteiros
	ptrInteiro = &inteiro;
	ptrReal = &real;
	ptrCaractere = &caractere;

	printf("\n.:: Valores Digitados ::.\n");
	printf("Inteiro: %d\n", inteiro);
	printf("Real: %f\n", real);
	printf("Caractere: %c\n", caractere);

	printf("\n.:: Tamanho em Bytes ::.\n");
	printf("Inteiro: %lu bytes\n", (unsigned long)sizeof(inteiro));
	printf("Real: %lu bytes\n", (unsigned long)sizeof(real));
	printf("Caractere: %lu bytes\n", (unsigned long)sizeof(caractere));

	printf("\n.:: Enderecos na Memoria ::.\n");
	printf("Inteiro: %p (hexa)\n", ptrInteiro);
	printf("Real: %p (hexa)\n", ptrReal);
	printf("Caractere: %p (hexa)\n", ptrCaractere);

	return 0;
}
