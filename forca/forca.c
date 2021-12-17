#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<time.h>
#include <conio.h>

int user_op = 1;
int program = 1;
int dificuldade = 0;

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
	printf("\n:: História da Forca ::\n");
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
	printf("#1 O jogador deverá escolher o tipo de jogo desejado\n");
	printf("#3 O jogador poderá escolher uma letra que tenha na palavra ou arriscar acertar a palavra inteira\n\n");
	printf(":: Palavras Pré-Definidas ::\n\n");
	printf("a. O jogador poderá escolher o tipo de palavra que deseja\n");
	printf("b. O computador irá sortear uma palavra aleatória no nível fácil ou 2 palavras no nivel dificil para o jogador adivinhar\n\n");
	printf(":: Palavras Personalizada - 2 jogadores ::\n\n");
	printf("a. O jogador digita uma dica\n");
	printf("b. O jogador digita a palavra a ser adivinhada pelo oponente\n");
	printf("c. O outro jogador tentará adivinhar a palavra escolhida\n");
	printf("d. Caso o jogador acerte uma letra, ele somará 3 pontos\n\n");
	printf(":: Para os modo de jogo, o jogador terá direito a 6 ERROS, antes de ir para a forca (x_x). ::");
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
				finalizando();
				printf("\n\nObrigado por jogar :D");
				sleep(1);
				system("cls");
				creditos();
				sleep(10);
				program = 0;
				system("cls");
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

void finalizando() {
	printf("F inalizando...");
	usleep(100000);
	system("cls");
	printf("Fi nalizando...");
	usleep(100000);
	system("cls");
	printf("Fin alizando...");
	usleep(100000);
	system("cls");
	printf("Fina lizando...");
	usleep(100000);
	system("cls");
	printf("Final izando...");
	usleep(100000);
	system("cls");
	printf("Finali zando...");
	usleep(100000);
	system("cls");
	printf("Finaliz ando...");
	usleep(100000);
	system("cls");
	printf("Finaliza ndo...");
	usleep(100000);
	system("cls");
	printf("Finalizan do...");
	usleep(100000);
	system("cls");
	printf("Finalizand o...");
	usleep(100000);
	system("cls");
	printf("Finalizando. ..");
	usleep(100000);
	system("cls");
	printf("Finalizando.. .");
	usleep(100000);
	system("cls");
	printf("Finalizando...");
	usleep(100000);
	system("cls");
}

void creditos() {
	printf("\n\n\n\n\n\n\n\n\n\n            Autores");
	printf("\nClayson Sousa  ");
	printf("   RM: GU3020347");
	printf("\nHenrique Munhoz");
	printf("   RM: GU3020185");
	printf("\nLarissa Gelesov");
	printf("   RM: GU3020142");
	printf("\nLorrayne Santos");
	printf("   RM: GU3020827\n");
	printf("\n            Turma");
	printf("\n1º ADS - 2/2021\n");
	printf("\n            Jogo");
	printf("\nA forca - 2021\n");
	printf("\n            Matéria");
	printf("\nAlgoritmos de Programação (APO)\n");
	printf("\n            Professora");
	printf("\nMarcia Pereira\n");
	printf("\n            Agradecimentos");
	printf("\nCesar Reigado");
	usleep(100000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n            Autores");
	printf("\nClayson Sousa  ");
	printf("   RM: GU3020347");
	printf("\nHenrique Munhoz");
	printf("   RM: GU3020185");
	printf("\nLarissa Gelesov");
	printf("   RM: GU3020142");
	printf("\nLorrayne Santos");
	printf("   RM: GU3020827\n");
	printf("\n            Turma");
	printf("\n1º ADS - 2/2021\n");
	printf("\n            Jogo");
	printf("\nA forca - 2021\n");
	printf("\n            Matéria");
	printf("\nAlgoritmos de Programação (APO)\n");
	printf("\n            Professora");
	printf("\nMarcia Pereira\n");
	printf("\n            Agradecimentos");
	printf("\nCesar Reigado");
	usleep(100000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n            Autores");
	printf("\nClayson Sousa  ");
	printf("   RM: GU3020347");
	printf("\nHenrique Munhoz");
	printf("   RM: GU3020185");
	printf("\nLarissa Gelesov");
	printf("   RM: GU3020142");
	printf("\nLorrayne Santos");
	printf("   RM: GU3020827\n");
	printf("\n            Turma");
	printf("\n1º ADS - 2/2021\n");
	printf("\n            Jogo");
	printf("\nA forca - 2021\n");
	printf("\n            Matéria");
	printf("\nAlgoritmos de Programação (APO)\n");
	printf("\n            Professora");
	printf("\nMarcia Pereira\n");
	printf("\n            Agradecimentos");
	printf("\nCesar Reigado");
	usleep(100000);
	system("cls");
	printf("\n\n\n\n\n\n\n            Autores");
	printf("\nClayson Sousa  ");
	printf("   RM: GU3020347");
	printf("\nHenrique Munhoz");
	printf("   RM: GU3020185");
	printf("\nLarissa Gelesov");
	printf("   RM: GU3020142");
	printf("\nLorrayne Santos");
	printf("   RM: GU3020827\n");
	printf("\n            Turma");
	printf("\n1º ADS - 2/2021\n");
	printf("\n            Jogo");
	printf("\nA forca - 2021\n");
	printf("\n            Matéria");
	printf("\nAlgoritmos de Programação (APO)\n");
	printf("\n            Professora");
	printf("\nMarcia Pereira\n");
	printf("\n            Agradecimentos");
	printf("\nCesar Reigado");
	usleep(100000);
	system("cls");
	printf("\n\n\n\n\n\n            Autores");
	printf("\nClayson Sousa  ");
	printf("   RM: GU3020347");
	printf("\nHenrique Munhoz");
	printf("   RM: GU3020185");
	printf("\nLarissa Gelesov");
	printf("   RM: GU3020142");
	printf("\nLorrayne Santos");
	printf("   RM: GU3020827\n");
	printf("\n            Turma");
	printf("\n1º ADS - 2/2021\n");
	printf("\n            Jogo");
	printf("\nA forca - 2021\n");
	printf("\n            Matéria");
	printf("\nAlgoritmos de Programação (APO)\n");
	printf("\n            Professora");
	printf("\nMarcia Pereira\n");
	printf("\n            Agradecimentos");
	printf("\nCesar Reigado");
	usleep(100000);
	system("cls");
	printf("\n\n\n\n\n            Autores");
	printf("\nClayson Sousa  ");
	printf("   RM: GU3020347");
	printf("\nHenrique Munhoz");
	printf("   RM: GU3020185");
	printf("\nLarissa Gelesov");
	printf("   RM: GU3020142");
	printf("\nLorrayne Santos");
	printf("   RM: GU3020827\n");
	printf("\n            Turma");
	printf("\n1º ADS - 2/2021\n");
	printf("\n            Jogo");
	printf("\nA forca - 2021\n");
	printf("\n            Matéria");
	printf("\nAlgoritmos de Programação (APO)\n");
	printf("\n            Professora");
	printf("\nMarcia Pereira\n");
	printf("\n            Agradecimentos");
	printf("\nCesar Reigado");
	usleep(100000);
	system("cls");
	printf("\n\n\n\n            Autores");
	printf("\nClayson Sousa  ");
	printf("   RM: GU3020347");
	printf("\nHenrique Munhoz");
	printf("   RM: GU3020185");
	printf("\nLarissa Gelesov");
	printf("   RM: GU3020142");
	printf("\nLorrayne Santos");
	printf("   RM: GU3020827\n");
	printf("\n            Turma");
	printf("\n1º ADS - 2/2021\n");
	printf("\n            Jogo");
	printf("\nA forca - 2021\n");
	printf("\n            Matéria");
	printf("\nAlgoritmos de Programação (APO)\n");
	printf("\n            Professora");
	printf("\nMarcia Pereira\n");
	printf("\n            Agradecimentos");
	printf("\nCesar Reigado");
	usleep(100000);
	system("cls");
	printf("\n\n\n            Autores");
	printf("\nClayson Sousa  ");
	printf("   RM: GU3020347");
	printf("\nHenrique Munhoz");
	printf("   RM: GU3020185");
	printf("\nLarissa Gelesov");
	printf("   RM: GU3020142");
	printf("\nLorrayne Santos");
	printf("   RM: GU3020827\n");
	printf("\n            Turma");
	printf("\n1º ADS - 2/2021\n");
	printf("\n            Jogo");
	printf("\nA forca - 2021\n");
	printf("\n            Matéria");
	printf("\nAlgoritmos de Programação (APO)\n");
	printf("\n            Professora");
	printf("\nMarcia Pereira\n");
	printf("\n            Agradecimentos");
	printf("\nCesar Reigado");
	usleep(100000);
	system("cls");
	printf("\n\n            Autores");
	printf("\nClayson Sousa  ");
	printf("   RM: GU3020347");
	printf("\nHenrique Munhoz");
	printf("   RM: GU3020185");
	printf("\nLarissa Gelesov");
	printf("   RM: GU3020142");
	printf("\nLorrayne Santos");
	printf("   RM: GU3020827\n");
	printf("\n            Turma");
	printf("\n1º ADS - 2/2021\n");
	printf("\n            Jogo");
	printf("\nA forca - 2021\n");
	printf("\n            Matéria");
	printf("\nAlgoritmos de Programação (APO)\n");
	printf("\n            Professora");
	printf("\nMarcia Pereira\n");
	printf("\n            Agradecimentos");
	printf("\nCesar Reigado");
	usleep(100000);
	system("cls");
	printf("\n            Autores");
	printf("\nClayson Sousa  ");
	printf("   RM: GU3020347");
	printf("\nHenrique Munhoz");
	printf("   RM: GU3020185");
	printf("\nLarissa Gelesov");
	printf("   RM: GU3020142");
	printf("\nLorrayne Santos");
	printf("   RM: GU3020827\n");
	printf("\n            Turma");
	printf("\n1º ADS - 2/2021\n");
	printf("\n            Jogo");
	printf("\nA forca - 2021\n");
	printf("\n            Matéria");
	printf("\nAlgoritmos de Programação (APO)\n");
	printf("\n            Professora");
	printf("\nMarcia Pereira\n");
	printf("\n            Agradecimentos");
	printf("\nCesar Reigado");
	usleep(100000);
	system("cls");
	printf("            Autores");
	printf("\nClayson Sousa  ");
	printf("   RM: GU3020347");
	printf("\nHenrique Munhoz");
	printf("   RM: GU3020185");
	printf("\nLarissa Gelesov");
	printf("   RM: GU3020142");
	printf("\nLorrayne Santos");
	printf("   RM: GU3020827\n");
	printf("\n            Turma");
	printf("\n1º ADS - 2/2021\n");
	printf("\n            Jogo");
	printf("\nA forca - 2021\n");
	printf("\n            Matéria");
	printf("\nAlgoritmos de Programação (APO)\n");
	printf("\n            Professora");
	printf("\nMarcia Pereira\n");
	printf("\n            Agradecimentos");
	printf("\nCesar Reigado");
}   

int jogo() {
	
	const NUM_ITENS = 20;

	char eolica[20][12] = { "BARULHO", "VENTO", "ELETRICIDADE",
			"CINETICA", "BATERIA", "ROTOR", "LIMPA", "MOINHO",
			"VELEIRO", "HELICE", "MEGAWATTS", "ENERGIA", "ALTITUDE",
			"BARATA", "SUSTENTAVEL", "RENOVAVEL", "MECANICA", "MODERNO", "ROTACAO",
			"CAMPO" };
	char hidreletrica[20][12] = { "AGUA", "QUEDA", "BARRAGEM", "TURBINA",
			"RIO", "INFRAESTRUTURA", "CONVERSAO", "HIDRAULICA", "RENOVAVEL",
			"REPRESA", "USINA", "RESERVATORIO", "SUSTENTAVEL", "SEGURANCA", "BOMBEAMENTO",
			"GIGAWATTS", "CANAIS", "CANOS", "COMPORTA", "CHUVA" };
	char termoeletrica[20][12] = { "CARVAO", "XISTO", "QUEIMA", "VAPOR", "AGUA",
			"SISTEMA", "DUTO", "FOSSIL", "CALOR", "TURBINA", "TORRE",
			"REFRIGERACAO", "CONDENSADOR", "ESTUFA", "TRANSMISSAO", "OXIGENIO", "CHUVA",
			"COMBUSTIVEL", "CALDEIRAO", "AQUECIMENTO" };
	char solar[20][12] = { "CALOR", "SOL", "LUZ",
			"FOTOVOLTAICA", "TERMICA", "ELETRICA", "AQUECEDOR", "RAIOS",
			"PAINEL", "RENOVAVEL", "FOTOTERMICA", "IRRADIAÇÃO", "HELIOTERMICO",
			"PLACAS", "INVERSOR", "CAPTACAO", "ESPELHO", "COLETOR",
			"HELIOSTATUS", "VAPOR" };
	char nuclear[20][12] = { "REATOR", "PLUTONIO", "URANIO", "RADIACAO",
			"USINA", "RESFRIAMENTO", "ATOMO", "FISSURA", "NUCLEO", "REACAO",
			"GERADOR", "VAPOR", "MOTOR", "IRRADIACAO", "NEUTRON", "ELETRON",
			"PARTICULA", "ISOTOPOS", "ELEMENTO", "CONTROLE" };

	int i;
	char voltarMenu;
	char dica[20];
	char palavra[20];
	char acertos[12];
	char palpite;
	int contemPalpite = 0;
	int opc = 0;
	int tema = 0;
	while (opc != 3) {
		char letrasUsadas[26];
		int numLetrasUsadas = 0;
		int usada;
		int erros = 0;

		do {

			system("cls");
			for (i = 0; i < strlen(letrasUsadas); i++) {
				letrasUsadas[i] = '*';
			}

			printf("::Forca::");
			printf("\n\n Escolha o modo de jogo: ");
			printf("\n\n1. Palavras pré-definidas ");
			printf("\n2. Palavra personalizada ");
			printf("\n3. Voltar ");
			printf("\n\nDigite a opção desejada: ");
			scanf("%d", &opc);

			if (opc == 1) {

				do {

					system("cls");

					printf("::Forca::");
					printf("\n\nEscolha o tema para jogar: ");
					printf("\n\n1. Eólica ");
					printf("\n2. Hidrelétrica ");
					printf("\n3. Termoelétrica ");
					printf("\n4. Solar ");
					printf("\n5. Nuclear ");
					printf("\n\nDigite a opção desejada: ");
					scanf(" %d", &tema);

				} while (tema < 1 || tema > 5);

				srand(time(NULL));

				switch (tema) {
				case 1:
					strcpy(dica, "Eólica");
					strcpy(palavra, eolica[rand() % NUM_ITENS]);
					break;
				case 2:
					strcpy(dica, "Hidrelétrica");
					strcpy(palavra, hidreletrica[rand() % NUM_ITENS]);
					break;
				case 3:
					strcpy(dica, "Termoelétrica");
					strcpy(palavra, termoeletrica[rand() % NUM_ITENS]);
					break;
				case 4:
					strcpy(dica, "Solar");
					strcpy(palavra, solar[rand() % NUM_ITENS]);
					break;
				case 5:
					strcpy(dica, "Nuclear");
					strcpy(palavra, nuclear[rand() % NUM_ITENS]);
					break;
				default:
					break;
				}

			} else if (opc == 2) {

				printf("\n Digite a dica: ");
				scanf(" %[^\n]", dica);
				printf("\n Digite a palavra a ser adivinhada: ");
				scanf(" %[^\n]", palavra);

				for (i = 0; i < strlen(palavra); i++) {
					palavra[i] = toupper(palavra[i]);
				}

			} else if (opc == 3) {
				break;
			}

		} while (opc != 1 && opc != 2 && opc != 3);

		if (opc != 3) {
			for (i = 0; i < strlen(palavra); i++) {
				acertos[i] = '*';
			}

			acertos[strlen(palavra)] = '\0';

			while (strcmp(palavra, acertos) != 0 && erros != 6) {

				system("cls");

				printf("::Forca::");
				printf("\n\n  Dica: %s   Letras usadas: ", dica);

				for (i = 0; i < numLetrasUsadas; i++) {
					printf("%c ", letrasUsadas[i]);

				}

				switch (erros) {
				case 0:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####            \n");
					printf("  ####            \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					break;
				case 1:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *o o*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					break;
				case 2:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *o o*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##              \n");
					printf("  ##              \n");
					break;
				case 3:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *o o*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##         |    \n");
					printf("  ##        /|    \n");
					printf("  ##       / |    \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##              \n");
					printf("  ##              \n");
					break;
				case 4:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *o o*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##         |    \n");
					printf("  ##        /|\\  \n");
					printf("  ##       / | \\ \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##              \n");
					printf("  ##              \n");
					break;
				case 5:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *o o*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##         |    \n");
					printf("  ##        /|\\  \n");
					printf("  ##       / | \\ \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##        /     \n");
					printf("  ##       /      \n");
					break;
				case 6:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *X X*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##         |    \n");
					printf("  ##        /|\\   \n");
					printf("  ##       / | \\  \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##        / \\   \n");
					printf("  ##       /   \\  \n");
					break;
				}
				printf("  ##               \n");
				printf("  #######################\n\n  ");

				for (i = 0; i < strlen(palavra); i++) {
					if (acertos[i] == '*') {
						printf("_ ");
					} else {
						printf("%c ", acertos[i]);
					}
				}

				if (strcmp(palavra, acertos) != 0 && erros != 6) {

					usada = 0;

					printf("\n\n  Digite seu palpite: ");
					scanf(" %c", &palpite);
					palpite = toupper(palpite);

					for (i = 0; i < 26; i++) {
						if (letrasUsadas[i] == palpite) {
							usada = 1;
						}
					}

					if (usada == 0) {
						letrasUsadas[numLetrasUsadas] = palpite;
						numLetrasUsadas++;

						contemPalpite = 0;

						for (i = 0; i < strlen(palavra); i++) {
							if (palpite == palavra[i]) {
								acertos[i] = palpite;
								contemPalpite = 1;
							}
						}

						if (contemPalpite == 0) {
							erros++;
						}
					}

				}

			}

			if (erros == 6) {
				printf("\n  Você perdeu! =(\n  A palavra era %s", palavra);
			} else {
				printf("\n  Você ganhou! :D A palavra era %s", palavra);
			}

			printf("\n\n  Digite 1 para voltar ao menu: ");
			scanf(" %c", &voltarMenu);
		}

	}
	user_op = 1;
} 

int jogando(){
	loading();
	jogo();
}

int main (void){
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
				jogando();
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
			default:
				system("cls");
		}
	} while(program = 1);
	
	getch();
	return 0;	
}
