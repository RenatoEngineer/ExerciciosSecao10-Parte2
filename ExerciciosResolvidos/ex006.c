/*
 * ex006.c
 *
 *  Criado em: 4 de nov de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte2
 */

#include <stdio.h>
#include <string.h>

//Estrutura para Armazenar os dados do Jogador
struct Jogador{
	char nome[50];
	int idade;
	char posicao[20];
	int numeroCamisa;
};

int main(){
	//Estruturas para Jogadores Principais e Reservas
	struct Jogador jogadoresPrincipais[6];
	struct Jogador reservas[4];

	struct Jogador *jogadorPrincipalAtual = jogadoresPrincipais;
	struct Jogador *reservaAtual = reservas;

	int escolha;

	printf(".:: Cadastro de Jogadores de Volei ::.\n");

	while (1){
		printf("\n.:: MENU ::.\n");
		printf("[1] - Inserir Jogador Principal\n");
		printf("[2] - Inserir Reserva\n");
		printf("[3] - Mostrar Jogador Principais\n");
		printf("[4] - Mostrar Reservas\n");
		printf("[5] - Sair\n");
		printf("Escolha uma Opcao: ");

		fflush(stdout);
		scanf("%d", &escolha);

		switch (escolha){
		case 1:
			if (jogadorPrincipalAtual - jogadoresPrincipais >= 6){
				printf("\nLimite de Jogadores Principais Atingido (6 Jogadores)!!!\n");
			} else {
				printf("\nDigite os Dados do Jogador Principal:\n");

				printf("Nome: ");
				fflush(stdout);
				scanf("%s", jogadorPrincipalAtual->nome);

				printf("Idade: ");
				fflush(stdout);
				scanf("%d", &jogadorPrincipalAtual->idade);

				printf("Posicao: ");
				fflush(stdout);
				scanf("%s", jogadorPrincipalAtual->posicao);

				printf("Numero de Camisa: ");
				fflush(stdout);
				scanf("%d", &jogadorPrincipalAtual->numeroCamisa);

				jogadorPrincipalAtual++;
			}
			break;

		case 2:
			if (reservaAtual - reservas >= 4){
				printf("\nLimite de Reservas Atingido (4 Jogadores)!!!\n");
			} else {
				printf("\nDigite os Dados do Reserva:\n");

				printf("Nome: ");
				fflush(stdout);
				scanf("%s", reservaAtual->nome);

				printf("Idade: ");
				fflush(stdout);
				scanf("%d", &reservaAtual->idade);

				printf("Posicao: ");
				fflush(stdout);
				scanf("%s", reservaAtual->posicao);

				printf("Numero da Camisa: ");
				fflush(stdout);
				scanf("%d", &reservaAtual->numeroCamisa);

				reservaAtual++;
			}
			break;

		case 3:
			printf("\n.:: Jogadores Principais ::.\n");
			for (struct Jogador *jogador = jogadoresPrincipais; jogador < jogadorPrincipalAtual; jogador++){
				printf("\nNome: %s\n", jogador->nome);
				printf("Idade: %d\n", jogador->idade);
				printf("Posicao: %s\n", jogador->posicao);
				printf("Numero da Camisa: %d\n", jogador->numeroCamisa);
			}
			break;

		case 4:
			printf("\n.:: Reservas ::.\n");
			for (struct Jogador *reserva = reservas; reserva < reservaAtual; reserva++){
				printf("\nNome: %s\n", reserva->nome);
				printf("Idade: %d\n", reserva->idade);
				printf("Posicao: %s\n", reserva->posicao);
				printf("Numero da Camisa: %d\n", reserva->numeroCamisa);
			}
			break;

		case 5:
			printf("\nSaindo do Programa!!!\n");
			return 0;

		default:
			printf("\nOpcao Invalida!!! Tente Novamente!!!\n");
		}
	}

	return 0;
}
