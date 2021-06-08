#include <stdlib.h>
#include <stdio.h>
#include "scontrol.h"
#include <string.h>

void BoasVindas() {
char ch = 0;
do{
	  line();
		printf("#                                                           #\n"
				   "#             Bem vindo(a) ao Storage Control!!!            #\n"
					 "#                                                           #\n"
					 "# Para passar para a proxima tela pressione a tecla [ENTER] #\n"
					 "# sempre que ver o símbolo -> ou no símbolo (), que signifi #\n"
					 "# ca final da exibição.                                     #\n"
					 "# Também será apresentada uma mensagem 'continue' e outra ' #\n"
					 "# Final' (ambas sem as aspas) antes dos símbolos mencionado #\n"
					 "# s a cima.                                                 #\n"
					 "# Para a devida execução do programa é recomendado que deix #\n"
					 "# e a janela do terminal/prompt grande para que não haja er #\n"
					 "# ro de formatação nos textos.                              #\n"
					 "#                                                           #\n"
					 "# Se quiser visualizar as paginas de uso e instruções do pr #\n"
					 "# ograma pressione a tecla [ENTER], se não, pressione a tec #\n"
					 "# la [ESC] seguida da tecla [ENTER].                        #\n"
					 "#                                                           #\n");
		line();
		printf("Continue -> \n");
		ch = getchar();
		if(ch == '\033') { clear(); break; }
		clear();
		line();
		printf("#                                                           #\n"
				   "# Abaixo será apresentado alguns formatos de uso do código  #\n"
				   "# Alguns lembretes e informações para se ter em mente ao u  #\n"
					 "# tilizar o programa.                                       #\n"
					 "#                                                           #\n"
					 "# 1.------------------------------------------------------- #\n"
					 "#  No menu e submenus, algumas opções tem o símbolo (*) ou  #\n"
					 "#  (@), segue descrição:                                    #\n"
					 "#        + (@) = Significa que a opção processa os dados ai #\n"
					 "#                nda não salvos em arquivos. Que possuem fá #\n"
					 "#                cil manipulação. Porém, deve-se lembrar qu #\n"
					 "#                e se caso o programa seja encerrado sem te #\n"
					 "#                r esses dados salvos a um arquivo, todos o #\n"
					 "#                s dados serão apagados.                    #\n"
					 "#        + (*) = Representa que a opção processa os dados j #\n"
					 "#                á salvos nos arquivos. Portanto, se o prog #\n"
					 "#                rama for encerrado só se manteram salvos o #\n"
					 "#                s dados nos arquivos e descartados os dado #\n"
					 "#                s não salvos (do símbolo (@)).             #\n"
					 "#                                                           #\n");
		line();
		printf("Continue -> \n");
		ch = getchar();
		if(ch == '\n') { clear(); break;}
		line();
		printf("#                                                           #\n"
				   "# 2.------------------------------------------------------- #\n"
					 "#  Ao término de cada função será apresentado a mensagem:   #\n"
					 "#                                                           #\n"
					 "# Deseja voltar para o Menu Principal? [s]im / [n]ão)       #\n"
					 "#                                                           #\n"
					 "# Ao pressionar a tecla 's' o usuário será direcionado ao m #\n"
					 "# enu principal do sistema, caso digite 'n' será executada  #\n"
					 "# a última função solicitada.No menu principal, ao selecion #\n"
					 "# ar a opção para encerrar o programa sem antes ter salvo o #\n"
					 "# conteúdo inserido ou sem ter feito a utilização do sistem #\n"
					 "# a, é necessário que pressione a tecla 'n' para encerrar o #\n"
					 "# programa, caso contrário retornará ao menu principal.     #\n");
		line();
		printf("Continue -> \n");
		ch = getchar();
		line();
		printf("#                                                           #\n"
				   "# 3.------------------------------------------------------- #\n"
					 "#  A entrada de informações dos dispositivos aceita múltipl #\n"
					 "#  as linhas. Portanto não importa quando digitar a tecla e #\n"
					 "#  nter, ele continuará aceitando a digitação. Então para e #\n"
					 "#  ncerrar a entrada de dados é preciso que pressione a tec #\n"
					 "#  la [ESC] e em seguida a tecla [ENTER]. Ao pressionar [ES #\n"
					 "#  c] aparecerá na ela os caracteres ^[, então é necessário #\n"
					 "#  Apenas teclar em [ENTER].                                #\n"
					 "#                                                           #\n");
		line();
		printf("Continue -> \n");
		ch = getchar();
		line();
		printf("#                                                           #\n"
			   "# 4.------------------------------------------------------- #\n"
			   "#  Só é possível fazer a alteração dos dados UMA ÚNICA VEZ. #\n"
			   "#  Portanto, caso tenha a necessidade de fazer mais alteraç #\n"
			   "#  ões terá de encerrar o programa e fazer a inserção dos d #\n"
			   "#  ados novamente.                                          #\n"
			   "#                                                           #\n");
		line();
		printf("Continue -> \n");
		ch = getchar();
		if(ch == '\n') { clear(); break;}
		}while(ch != '\n');
}

void Banner() {
  char ch = 0;
	clear();
	printf("##############");
	line();

	printf("#                                                                         #\n"
         "#    .d8888. d888888b  .d88b.  d8888b.  .d8b.   d888b  d88888b            #\n"
         "#    88'  YP `~~88~~' .8P  Y8. 88  `8D d8' `8b 88' Y8b 88'                #\n"
         "#    `8bo.      88    88    88 88oobY' 88ooo88 88      88ooooo            #\n"
         "#      `Y8b.    88    88    88 88`8b   88~~~88 88  ooo 88~~~~~            #\n"
         "#    db   8D    88    `8b  d8' 88 `88. 88   88 88. ~8~ 88.                #\n"
         "#    `8888Y'    YP     `Y88P'  88   YD YP   YP  Y888P  Y88888P            #\n"
         "#                                                                         #\n"
         "#            .o88b.  .d88b.  d8b   db d888888b d8888b.  .d88b.  db        #\n"
         "#           d8P  Y8 .8P  Y8. 888o  88 `~~88~~' 88  `8D .8P  Y8. 88        #\n"
         "#           8P      88    88 88V8o 88    88    88oobY' 88    88 88        #\n"
         "#           8b      88    88 88 V8o88    88    88`8b   88    88 88        #\n"
         "#           Y8b  d8 `8b  d8' 88  V888    88    88 `88. `8b  d8' 88booo.   #\n"
         "#             Y88P'  `Y88P'  VP   V8P    YP    88   YD  `Y88P'  Y88888P   #\n"
         "#                                                                         #\n");
	printf("##############");
	line();
	pause();
  printf("\nPressione a tecla [ENTER] para continuar ou [ESC] seguido da tecla\n"
			   "[ENTER] para cancelar...\n");
	ch = getchar();
	if(ch == '\033') {
		printf("Encerrando o programa...\n");
	  pause();
		exit(EXIT_SUCCESS);
	}
  clear();
}

char menu() {
  char resp = 0;

	printf("\nDeseja voltar para o Menu Principal? [s]im / [n]ão\n");
  scanf(" %c", &resp);
  clear();
	if(resp != 's' && resp != 'n' && resp != 'S' && resp != 'N') {
		menu();
	}
	return resp;
}

t_iotmgr GetIotInfo() {
	t_iotmgr mgr;
	int i = 0;
	char ch = 0;
  printf("Informe o nome pelo qual gostaria de-------------------------\n");
	printf("identificar o dispositivo: \n");
	while(getchar() != '\n');
	while((ch = getchar()) != '\n') {
		mgr.nome_iot[i++] = ch;
	}
	mgr.nome_iot[i] = '\n';
	ch = 0;
	i = 0;
	printf("Insira as informações do dispositivo:------------------------\n");
	while((ch = getchar()) != '\033') {
		mgr.info_iot[i++] = ch;
	}
	mgr.info_iot[i] = '\0';
	return mgr;
}

void ShowData(t_iotmgr mgr, int esc) {
	if(esc == 1) {
		printf("Nome do dispositivo:-----------------------------------------\n");
		printf("%s\n", mgr.nome_iot);
	} else if(esc == 2) {
		printf("Informações:-------------------------------------------------\n");
		printf("%s\n", mgr.info_iot);
	} else if(esc == 3){
		printf("Nome do dispositivo:-----------------------------------------\n");
		printf("%s\n", mgr.nomeAlterado);
	} else if(esc == 4) {
		printf("Informações:-------------------------------------------------\n");
		printf("%s\n", mgr.infoAlterado);
	} else if(esc == 5) {
		ShowData(mgr, 1);
		ShowData(mgr, 2);
	} else {
		ShowData(mgr, 3);
		ShowData(mgr, 4);
	}
}

int AlteraDados(t_iotmgr mgr, unsigned int esc) {
//char *ch = (char *)malloc(sizeof(char)), ch2 = 0;
char ch2 = 0;
int i = 0;
	if(esc == 1) {
 		printf("Nome do dispositivo:-----------------------------------------\n");
		printf("%s\n\n", mgr.nome_iot);
		printf("Insira o novo nome:------------------------------------------\n");
//		mgr.nomeAlterado = (char *)calloc(CHAR_NOME, sizeof(char));
//		scanf(" %[^\n]s", ch);
		while((ch2 = getchar()) != '\n') {
			mgr.nomeAlterado[i++] = ch2;
		}
//		strcpy(mgr.nomeAlterado, ch);
	} else if(esc == 2) {
		printf("Informações dos dispositivos:--------------------------------\n");
		printf("%s\n\n", mgr.info_iot);
		printf("Insira as novas informações:---------------------------------\n");
		while((ch2 = getchar()) != '\033') {
			mgr.infoAlterado[i++] = ch2;
		}	
	} else {
		AlteraDados(mgr, 1);
		AlteraDados(mgr, 2);
	} 
	return EXIT_SUCCESS;
}

int FileInsert(t_iotmgr mgr, unsigned int esc) {
	int i = 0;
	/* Abre os arquivos  */
	FILE *iotNames = fopen(IOTN, "a");
	FILE *iotInfo = fopen(IOTF, "a"); 
	if(iotNames == NULL) {
		printf("Não foi possível criar ou abir os arquivos(NOMES)!!!\n");
		return EXIT_SUCCESS;
	} else if(iotInfo == NULL) {
		printf("Não foi possível criar ou abir os arquivos(INFOS)!!!\n");
		return EXIT_SUCCESS;
	} else {
		if(esc == 1) {
			while(mgr.nomeAlterado[i] != '\0') {
				fputc(mgr.nomeAlterado[i++], iotNames);
			}
			fputc('\n', iotNames);
			FileInsert(mgr, 4);
		} else if(esc == 2) {
			while(mgr.infoAlterado[i] != '\0') {
				fputc(mgr.infoAlterado[i++], iotInfo);
			}
			fputc('\n', iotInfo);
			FileInsert(mgr, 3);
		} else if(esc == 3) {
			while(mgr.nome_iot[i] != '\0') {
				fputc(mgr.nome_iot[i++], iotNames);
			}
			fputc('\n', iotNames);
			FileInsert(mgr, 4);
		} else if(esc == 4) {
			while(mgr.info_iot[i] != '\0') {
				fputc(mgr.info_iot[i++], iotInfo);
			}
			fputc('\n', iotInfo);
			FileInsert(mgr, 3);
		} else if(esc == 5){
			FileInsert(mgr, 3);
			FileInsert(mgr, 4);
		} else {
			printf("Opção inválida\n");
			return EXIT_SUCCESS;
		}
	//}
		fclose(iotNames);
		fclose(iotInfo);
	}
	return EXIT_SUCCESS;
}

int FileRead(t_iotmgr mgr, unsigned int esc) {
	FILE *iotName, *iotInfo;
	char line[COMPRIMENTO_MAXIMO_LINHA] = {0};

  unsigned int line_count = 0;
	iotName = fopen(IOTN, "r");
	iotInfo = fopen(IOTF, "r");
	if(iotName == NULL || iotInfo == NULL) {
		printf("Falha ao abrir os arquivos\n");
		return EXIT_FAILURE;
	}
	if(esc == 1) {
		while (fgets(line, COMPRIMENTO_MAXIMO_LINHA, iotName)){
			printf("[%02d]| %s", ++line_count, line);
		 if (line[strlen(line) - 1] != '\n')
				printf("\n");
		}
	} else if(esc == 2) {
		while (fgets(line, COMPRIMENTO_MAXIMO_LINHA, iotInfo)){
			printf("[%02d]| %s", ++line_count, line);
		 if (line[strlen(line) - 1] != '\n')
				printf("\n");
		}
	} else if(esc == 3) {
		FileRead(mgr, 1);
		line();
		FileRead(mgr, 2);
	}

	fclose(iotName);
	fclose(iotInfo);
	return EXIT_SUCCESS;
}

int FileCheck() {
	FILE *iotName, *iotInfo;
	iotName = fopen(IOTN, "r");
	iotInfo = fopen(IOTF, "r");
	if(iotName == NULL || iotInfo == NULL) {
		return EXIT_FAILURE;
	} else {
		return EXIT_SUCCESS;
	}
	fclose(iotName);
	fclose(iotInfo);
}
