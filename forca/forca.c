#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>


//Menu Princial
void menu() {
	printf("Jogo: A Forca\n\n");
	printf("Menu Principal\n");
	printf("\n1. Sobre o jogo");
	printf("\n2. Jogar");
	printf("\n3. Finalizar");
	printf("\n\nDigite a op��o desejada: ");
}

//Menu Sobre
void menu_sobre() {
	printf(":: Sobre o jogo ::");
	printf("\n\n1. Sobre a Forca");
	printf("\n2. Instru��es - Como Jogar");
	printf("\n3. Voltar");
	printf("\n\nDigite a op��o deseja: ");
}


void sobre_forca() {
	printf(":: Sobre a Forca ::\n\n");
	printf("O jogador (que est� tentando adivinhar a palavra) pode escolher\n");
	printf("entre falar uma letra ou fazer uma tentativa perigosa de tentar\n");
	printf("adivinhar a palavra falando a palavra que pensa que �\n");
	printf("\n:: Hist�ria da Forca ::");
	printf ("Um dos jogos mais antigos entre as tradi��es, algumas teorias argumentam que a brincadeira foi criada na Inglaterra Victoriana\n");
	printf ("Especialistas ainda defendem que o jogo da forca ajuda as crian�as a ultrapassar problemas de dislexia\n");
	printf ("O Jogo da Forca � bem antigo e sua origem � obscura,acredita-se que foi criado na Inglaterra Victoriana\n");
	printf ("O primeiro registro do jogo foi feito no livro Traditional Games, publicado em 1894\n");
	printf("\n\n1. Voltar");
}

void sobre_inst() {
	printf(":: Como Jogar ::\n\n");
	printf("#1 O jogador dever� escolher o n�vel de dificuldade pretendido\n");
	printf("#2 O computador ir� sortear uma palavra aleat�ria no n�vel f�cil ou 2 palavras no nivel dificil para o jogador adivinhar\n");
	printf("#3 O jogador poder� escolher uma letra que tenha na palavra ou arriscar acertar a palavra inteira\n\n");
	printf(":: N�vel F�cil ::\n\n");
	printf("a. O jogador poder� escolher at� tr�s dicas sem perder pontua��o\n");
	printf("b. Caso o jogador acerte uma letra, ele somar� 3 pontos\n\n");
	printf(":: N�vel Dif�cil ::\n\n");
	printf("a. O jogador ter� direito a 3 dicas\n");
	printf("b. Caso o jogador opte por uma dica, perder� 5 pontos para cada uma\n");
	printf("c. Caso o jogador erre a letra escolhida, perder� 1 ponto\n");
	printf("d. Caso o jogador acerte uma letra, ele somar� 3 pontos\n\n");
	printf(":: Para os 2 n�veis o jogador ter� direito a 6 ERROS, antes de ir para a forca (x_x). ::");
	printf("\n\n1. Voltar");
}

//Menu Jogar
void menu_jogar(){
	printf(":: Jogar ::");
	printf("\n\n1. N�vel 1 - F�cil - 1 palavra\n");
	printf("\n2. N�vel 2 - Dificil - 2 palavras");
	printf("\n3. Voltar");
	printf("\n\nDigite a op��o desejada: ");
}

//Menu sair
void menu_sair(){
	printf("Finalizar");
	printf("\nDeseja realmente finalizar?");
	printf("\n\n1. N�o");
	printf("\n2. Sim");
	printf("\n\nDigite a op��o desejada: ");
}


//L�gica
char escolha_user(){
	char op_user;
	int val_user = 0;
	while(val_user == 0) {
		scanf(" %c", &op_user);
		switch(op_user){
			case '1':	
			case '2':	
			case '3':
				system("cls");
				return op_user;
			default:
				printf("Op��o Inv�lida...\n\n");
				sleep(2);
				system("cls");
				printf("\nCarregando...");
				sleep(2);
				system("cls");
				menu();	
		}
	}	
}

char escolha_sobre(){
	char op_sobre;
	int val_sobre = 0;
	while(val_sobre == 0){
		scanf(" %c", &op_sobre);
		switch(op_sobre){
			case '1':
			case '2':
			case '3':
				system("cls");
				return op_sobre;
			default:
				printf("Op��o Inv�lida...\n\n");
				sleep(2);
				system("cls");
				printf("\nCarregando...");
				sleep(2);
				system("cls");
				menu_sobre();
		}
	}
}

char escolha_jogar(){
	char op_jogar;
	int val_jogar = 0;
	while(val_jogar == 0){
		scanf(" %c", &op_jogar);
		switch(op_jogar){
			case '1':
			case '2':
			case '3':
				system("cls");
				return op_jogar;
			default:
				printf("Op��o Inv�lida...\n\n");
				sleep(2);
				system("cls");
				printf("\nCarregando...");
				sleep(2);
				system("cls");
				menu_jogar();
		}
	}
}

char escolha_sair(){
	char op_sair;
	int val_sair = 0;
	while(val_sair == 0){
		scanf(" %c", &op_sair);
		switch(op_sair){
			case '1':
				system("cls");
				return op_sair;
			case '2':
				system("cls");
				printf("Finalizando...");
				printf("\n\nObrigado por jogar :D");
				return op_sair;
				exit(0);
			default:
				printf("Op��o Inv�lida...\n\n");
				sleep(2);
				system("cls");
				printf("\nCarregando...");
				sleep(2);
				system("cls");
				menu_sair();
		}
	}
}

int sobre_jogo(){
	printf("\n\nCarregando...");
	sleep(3);
	system("cls");
	menu_sobre();
	escolha_sobre();
}

int jogar(){
	printf("\n\nCarregando...");
	sleep(3);
	system("cls");
	menu_jogar();
	escolha_jogar();
}

int fim(){
	printf("\n\nCarregando...");
	sleep(3);
	system("cls");
	menu_sair();
	escolha_sair();
}

//Arrays

//Print Jogo
/*
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t__|_________\n\n"); */
      

int main (){
	setlocale(LC_ALL, "Portuguese");
	char op;
	
	menu();
	op = escolha_user();
	
	printf("A op��o escolhida foi %c", op);
	
	if(op == '1'){
		sobre_jogo();
	}
	else
		if(op == '2'){
			jogar();
		}
		else{
			fim();
		}
		
	return 0;	
}
