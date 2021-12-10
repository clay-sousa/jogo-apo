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
	printf("\n\nDigite a opção desejada: ");
}

//Menu Sobre
void menu_sobre() {
	printf(":: Sobre o jogo ::");
	printf("\n\n1. Sobre a Forca");
	printf("\n2. Instruções - Como Jogar");
	printf("\n3. Voltar");
	printf("\n\nDigite a opção deseja: ");
}


void sobre_forca() {
	printf(":: Sobre a Forca ::\n\n");
	printf("O jogador (que está tentando adivinhar a palavra) pode escolher\n");
	printf("entre falar uma letra ou fazer uma tentativa perigosa de tentar\n");
	printf("adivinhar a palavra falando a palavra que pensa que é\n");
	printf("\n:: História da Forca ::");
	printf ("Um dos jogos mais antigos entre as tradições, algumas teorias argumentam que a brincadeira foi criada na Inglaterra Victoriana\n");
	printf ("Especialistas ainda defendem que o jogo da forca ajuda as crianças a ultrapassar problemas de dislexia\n");
	printf ("O Jogo da Forca é bem antigo e sua origem é obscura,acredita-se que foi criado na Inglaterra Victoriana\n");
	printf ("O primeiro registro do jogo foi feito no livro Traditional Games, publicado em 1894\n");
	printf("\n\n1. Voltar");
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
}

//Menu Jogar
void menu_jogar(){
	printf(":: Jogar ::");
	printf("\n\n1. Nível 1 - Fácil - 1 palavra\n");
	printf("\n2. Nível 2 - Dificil - 2 palavras");
	printf("\n3. Voltar");
	printf("\n\nDigite a opção desejada: ");
}

//Menu sair
void menu_sair(){
	printf("Finalizar");
	printf("\nDeseja realmente finalizar?");
	printf("\n\n1. Não");
	printf("\n2. Sim");
	printf("\n\nDigite a opção desejada: ");
}


//Lógica
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
				printf("Opção Inválida...\n\n");
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
				printf("Opção Inválida...\n\n");
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
				printf("Opção Inválida...\n\n");
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
				printf("Opção Inválida...\n\n");
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
	
	printf("A opção escolhida foi %c", op);
	
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
