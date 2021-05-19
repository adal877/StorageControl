#pragma once
#ifdef _WIN32
#define clear() { system("cls"); }
#define pause() { system("pause"); }
#define edit() { system("notepad"); }
#define IOTN "_iotnomes.txt"
#define IOTF "_iotinfo.txt"
#else
#define clear() { system("clear"); }
#define pause() { system("sleep 3"); }
#define editn() { system("nano .iotnomes.txt"); }
#define editf() { system("nano .iotinfo.txt"); }
#define IOTN ".iotnomes.txt"
#define IOTF ".iotinfo.txt"
#endif

#define SIZE 1024
#define line() {for(int i = 0; i < 62; i++) { if(i == 61) { printf("\n"); break; } printf("#"); } }
#define CHAR_NOME 256
#define CHAR_INFO 1024
#define COMPRIMENTO_MAXIMO_LINHA 56

typedef struct iotmgr { //IOT manager
	    char nome_iot[CHAR_NOME]; /* armazena o nome do dispositivo */
		char nomeAlterado[CHAR_NOME]; /* armazena  uma nova string caso queira alterar algo */
 		char info_iot[CHAR_INFO]; /* armazena as informações do dispositivo */
		char infoAlterado[CHAR_INFO];/* armazena  uma nova string caso queira alterar algo */
}t_iotmgr;

t_iotmgr GetIotInfo();
char menu();
int AlteraDados(t_iotmgr mgr, unsigned int esc);
int FileInsert(t_iotmgr mgr, unsigned int esc);
int FileRead(t_iotmgr mgr, unsigned int esc);
int FileCheck();
void ShowData(t_iotmgr mgr, int esc);
void BoasVindas();
void Banner();
