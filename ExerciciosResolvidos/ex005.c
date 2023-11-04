/*
 * ex005.c
 *
 *  Criado em: 4 de nov de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte2
 */

#include <stdio.h>

int main(){

	//Declaracao de Variaveis
	int x1 = 1, x2 = 2, *px1;  //x1 inicializada com valor 1
	                          //x2 inicialiada com valor 2
	                         //*px1 declarada como um ponteiro inteiro, mas nao e inicializada

	px1 = &x1;  //px1 recebe o endereco de memoria da variavel x1
	           //e agora aponta para a localizacao de memoria onde o valor de x1 esta armazenado.

	x1 = 5;   //O valor da variavel x1 e atualizado para 5. Isso significa que o valor
	         //armazenado no endereco de memoria apontado por px1 tambem se torna 5, pois
	        //px1 esta apontando para x1.

	x2 = (*px1) + 10;  //O Valor de X2 e definido como o valor apontado por px1
	                  //(que agora e 5 conforme etapa anterior) mais 10.
	                 //Portanto x2 e definido como 15.

	x1 = 9;  //A variavel x1 e atualizada novamente para 9. Isso nao afeta o valor de x2,
	        //nem o valor apontado por px1, pois px1 continua apontando para o endereco de memoria de x1,
	       //que agora contem o valor 9.

	printf("x1: %d x2: %d *px1: %d", x1, x2, *px1);  //Por fim e impressa a saida com o seguinte resultado:
	                                                //x1: 9 x2: 15 *px1: 9

	return 0;
}
