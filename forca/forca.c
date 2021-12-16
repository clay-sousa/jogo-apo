#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<time.h>
#include <conio.h>

int user_op = 1;
int program = 1;

//Menu Princial
void menu() {
	printf(":: A Forca ::\n\n");
	printf("Menu Principal\n");
	printf("\n1. Sobre o jogo");
	printf("\n2. Jogar");
	printf("\n3. Finalizar");
	printf("\n\nDigite a opção desejada: ");
}

char escolha_user(){
	char op_user;
	int val_user = 0;
	while(val_user == 0) {
		scanf(" %c", &op_user);
		switch(op_user){
			case '1':
				system("cls");
				user_op = 2;
				return op_user;
			case '2':
				system("cls");
				user_op = 3;
				return op_user;	
			case '3':
				system("cls");
				user_op = 4;
				return op_user;
			default:
				printf("Opção Inválida...\n\n");
				sleep(2);
				system("cls");
				loading();
				menu();
		}
	}	
}

int menuinicial() {
	loading();
	system("cls");
	menu();
	escolha_user();
}

//Menu Sobre
void menu_sobre() {
	printf(":: Sobre o jogo ::");
	printf("\n\n1. Sobre a Forca");
	printf("\n2. Instruções - Como Jogar");
	printf("\n3. Voltar");
	printf("\n\nDigite a opção desejada: ");
}

char escolha_sobre(){
	char op_sobre;
	int val_sobre = 0;
	while(val_sobre == 0){
		scanf(" %c", &op_sobre);
		switch(op_sobre){
			case '1':
				system("cls");
				user_op = 5;
				return op_sobre;
			case '2':
				system("cls");
				user_op = 6;
				return op_sobre;
			case '3':
				system("cls");
				user_op = 1;
				return op_sobre;
			default:
				printf("Opção Inválida...\n\n");
				sleep(2);
				system("cls");
				loading();
				menu_sobre();
		}
	}
}

int sobre_jogo(){
	loading();
	system("cls");
	menu_sobre();
	escolha_sobre();
}

void sobre_histforca() {
	printf(":: Sobre a Forca ::\n\n");
	printf("O jogador (que está tentando adivinhar a palavra) pode escolher\n");
	printf("entre falar uma letra ou fazer uma tentativa perigosa de tentar\n");
	printf("adivinhar a palavra falando a palavra que pensa que é\n");
	printf("\n:: História da Forca ::");
	printf ("Um dos jogos mais antigos entre as tradições, algumas teorias argumentam que a brincadeira foi criada na Inglaterra Victoriana\n");
	printf ("Especialistas ainda defendem que o jogo da forca ajuda as crianças a ultrapassar problemas de dislexia\n");
	printf ("O Jogo da Forca é bem antigo e sua origem é obscura,acredita-se que foi criado na Inglaterra Victoriana\n");
	printf ("O primeiro registro do jogo foi feito no livro Traditional Games, publicado em 1894\n");
	printf("\n1. Voltar");
	printf("\n\nDigite a opção desejada: ");
}

char escolha_histforca(){
	char op_sobre;
	int val_sobre = 0;
	while(val_sobre == 0){
		scanf(" %c", &op_sobre);
		switch(op_sobre){
			case '1':
				system("cls");
				user_op = 2;
				return op_sobre;
			default:
				printf("Opção Inválida...\n\n");
				sleep(2);
				system("cls");
				loading();
				sobre_histforca();
		}
	}
}

int sobre_forca(){
	loading();
	system("cls");
	sobre_histforca();
	escolha_histforca();
}

void sobre_inst() {
	printf(":: Como Jogar ::\n\n");
	printf("#1 O jogador deverá escolher o nível de dificuldade pretendido\n");
	printf("#2 O computador irá sortear uma palavra aleatória no nível fácil ou 2 palavras no nivel dificil para o jogador adivinhar\n");
	printf("#3 O jogador poderá escolher uma letra que tenha na palavra ou arriscar acertar a palavra inteira\n\n");
	printf(":: Nível Fácil ::\n\n");
	printf("a. O jogador poderá escolher até três dicas sem perder pontuação\n");
	printf("b. Caso o jogador acerte uma letra, ele somará 3 pontos\n\n");
	printf(":: Nível Difícil ::\n\n");
	printf("a. O jogador terá direito a 3 dicas\n");
	printf("b. Caso o jogador opte por uma dica, perderá 5 pontos para cada uma\n");
	printf("c. Caso o jogador erre a letra escolhida, perderá 1 ponto\n");
	printf("d. Caso o jogador acerte uma letra, ele somará 3 pontos\n\n");
	printf(":: Para os 2 níveis o jogador terá direito a 6 ERROS, antes de ir para a forca (x_x). ::");
	printf("\n\n1. Voltar");
	printf("\n\nDigite a opção desejada: ");
}

char escolha_inst(){
	char op_sobre;
	int val_sobre = 0;
	while(val_sobre == 0){
		scanf(" %c", &op_sobre);
		switch(op_sobre){
			case '1':
				system("cls");
				user_op = 2;
				return op_sobre;
			default:
				printf("Opção Inválida...\n\n");
				sleep(2);
				system("cls");
				loading();
				sobre_inst();
		}
	}
}

int inst() {
	loading();
	system("cls");
	sobre_inst();
	escolha_inst();
}

//Menu Jogar
void menu_jogar(){
	printf(":: Jogar ::");
	printf("\n\n1. Nível 1 - Fácil - 1 palavra");
	printf("\n2. Nível 2 - Dificil - 2 palavras");
	printf("\n\n3. Voltar");
	printf("\n\nDigite a opção desejada: ");
}

char escolha_jogar(){
	char op_jogar;
	int val_jogar = 0;
	while(val_jogar == 0){
		scanf(" %c", &op_jogar);
		switch(op_jogar){
			case '1':
				system("cls");
				user_op = 7;
				return op_jogar;
			case '2':
				system("cls");
				user_op = 8;
				return op_jogar;
			case '3':
				system("cls");
				user_op = 1;
				return op_jogar;
			default:
				printf("Opção Inválida...\n\n");
				sleep(2);
				system("cls");
				loading();
				menu_jogar();
		}
	}
}

int jogar(){
	loading();
	system("cls");
	menu_jogar();
	escolha_jogar();
}
//Menu sair
void menu_sair(){
	printf("Finalizar");
	printf("\nDeseja realmente finalizar?");
	printf("\n\n1. Não");
	printf("\n2. Sim");
	printf("\n\nDigite a opção desejada: ");
}

char escolha_sair(){
	char op_sair;
	int val_sair = 0;
	while(val_sair == 0){
		scanf(" %c", &op_sair);
		switch(op_sair){
			case '1':
				system("cls");
				user_op = 1;
				return op_sair;
			case '2':
				system("cls");
				printf("Finalizando...");
				printf("\n\nObrigado por jogar :D");
				program = 0;
				exit(0);
			default:
				printf("Opção Inválida...\n\n");
				sleep(2);
				system("cls");
				loading();
				menu_sair();
		}
	}
}

int fim(){
	loading();
	system("cls");
	menu_sair();
	escolha_sair();
}

void loading() {
	printf("C arregando...");
	usleep(100000);
	system("cls");
	printf("Ca rregando...");
	usleep(100000);
	system("cls");
	printf("Car regando...");
	usleep(100000);
	system("cls");
	printf("Carr egando...");
	usleep(100000);
	system("cls");
	printf("Carre gando...");
	usleep(100000);
	system("cls");
	printf("Carreg ando...");
	usleep(100000);
	system("cls");
	printf("Carrega ndo...");
	usleep(100000);
	system("cls");
	printf("Carregan do...");
	usleep(100000);
	system("cls");
	printf("Carregand o...");
	usleep(100000);
	system("cls");
	printf("Carregando ...");
	usleep(100000);
	system("cls");
	printf("Carregando. ..");
	usleep(100000);
	system("cls");
	printf("Carregando.. .");
	usleep(100000);
	system("cls");
	printf("Carregando...");
	usleep(100000);
	system("cls");
}
      

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	do {
		switch(user_op){
			case 1:
				menuinicial();
				break;
			case 2:
				sobre_jogo();
				break;
			case 3:
				jogar();
				break;
			case 4:
				fim();
				break;
			case 5:
				sobre_forca();
				break;
			case 6:
				inst();
				break;
			case 7:
				
			default:
				system("cls");
		}
	} while(program = 1);
	
	getch();
	return 0;	
}
