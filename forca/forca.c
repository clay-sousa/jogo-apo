#include<stdio.h>
#include<locale.h>
#include<time.h>

void menu() {
	printf("Jogo: A Forca\n\n");
	printf("Menu Principal\n");
	printf("\n1. Sobre o jogo");
	printf("\n2. Jogar");
	printf("\n3. Finalizar\n");
	printf("\nDigite a opção desejada: ");
}

char escolha_user() {
	char op;
	int valido = 0;
	while(valido == 0) {
		scanf(" %c", &op);
		switch(op){
			case '1':	
			case '2':	
			case '3':
				system("cls");
				return op;
			default:
				printf("Opção Invalida...\n\n");
				printf("\nCarregando...");
				sleep(2);
				system("cls");
				menu();	
		}
	}	
}

int sobre_jogo() {
	printf("\n\nCarregando...");
	sleep(3);
	system("cls");
	printf("Sobre o Jogo");
}

int jogar() {
	printf("\n\nCarregando...");
	sleep(3);
	system("cls");
	printf("Jogar");
}

int fim() {
	printf("\n\nCarregando...");
	sleep(3);
	system("cls");
	printf("Finalizando");
}

int main (){
	setlocale(LC_ALL, "Portuguese");
	char option;
	
	menu();
	option = escolha_user();
	
	printf("A opção escolhida foi %c", option);
	
	if(option == '1'){
		sobre_jogo();
	}
	else
		if(option == '2'){
			jogar();
		}
		else{
			fim();
		}
		
	return 0;	
}
