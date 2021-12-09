#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>


void menu() {
	printf("Jogo: A Forca\n\n");
	printf("Menu Principal\n");
	printf("\n1. Sobre o jogo");
	printf("\n2. Jogar");
	printf("\n3. Finalizar");
	printf("\n\nDigite a opção desejada: ");
}

void menu_sobre() {
	printf("Sobre o jogo");
	printf("\n\n1. Sobre a Forca");
	printf("\n2. Instruções - Como Jogar");
	printf("\n3. Voltar");
	printf("\n\nDigite a opção deseja: ");
}

void sobre_forca() {
	printf("Sobre a Forca\n\n");
	printf("O jogador (que está tentando adivinhar a palavra) pode escolher entre falar uma letra ou fazer uma tentativa perigosa de tentar adivinhar a palavra falando a palavra que pensa que é.");
	printf("\n\n1. Voltar");
}

void sobre_inst() {
	printf("");
	printf("\n\n1. Voltar");
}


void menu_jogar(){
	printf("Jogar");
	printf("\n\n1. Nível 1");
	printf("\n2. Nível 2");
	printf("\n3. Voltar");
	printf("\n\nDigite a opção desejada: ");
}

void menu_sair(){
	printf("Finalizar");
	printf("\nDeseja realmente finalizar?");
	printf("\n\n1. Não");
	printf("\n2. Sim");
	printf("\n\nDigite a opção desejada: ");
}

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

// Arrays

int main (){
	setlocale(LC_ALL, "Portuguese");
	char op;
	int pontua = 0;
	
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
