#include<stdio.h>
#include<locale.h>

int menu;

int main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	printf("Jogo: A Forca");
	printf("\nMenu Principal");
	printf("\n1. Sobre o jogo");
	printf("\n2. Jogar");
	printf("\n3. Finalizar");
	printf("\nDigite a op��o desejada: ");
	scanf("%d", &menu);
	
	if (menu==1){
		printf("\nSobre o Jogo:");
	}
	else
		if(menu==2){
			printf("\nJogar");
		}
		else
			if(menu==3){
				printf("\nFinalizando...");
				printf("\nObrigado por jogar :D");
			}
			else{
				printf("\nComando Inv�lido...");
				printf("\nSelecione uma op��o v�lida.");
			}
	
	
	
	return 0;
}
