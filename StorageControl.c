/*
 * ====================================================================================
 *
 *       Filename:  StorageControl.c
 *
 *    Description:  Program developed for a Software Engennier project
 *
 *        Version:  1.0
 *        Created:  11/03/2021 10:40:54
 *       Compiler:  gcc
 *
 *         Author:  Adalberto Luiz Dos Santos Junior
 *
 * ====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "scontrol.h"
#include "ansi_escapes.h"

int main() {
	setupConsole();
  unsigned int resp = 0, salvo = 0, insert = 0;
  unsigned int resp2 = 0, filecheck = 0;
  unsigned int resp3 = 0, DadoAlterado = 0;
  char sair = 's';
  t_iotmgr mgr;
  setlocale(LC_ALL,"");

  clear();
	Banner();
  BoasVindas();
	filecheck = FileCheck();
	if(filecheck == EXIT_SUCCESS) {
		line();
		printf("#                                                           #\n"
				   "#      Foram encontrados arquvios salvos no diretório.      #\n"
				   "#                                                           #\n"
		       "#   Recomenda-se ler o conteúdo dos arquivos antes de fazer #\n"
		       "# a inserção de alguma informação, ou alterar algo.         #\n"
					 "#                                                           #\n");
		line();
		printf("Continuar -> \n");
		getchar();
	} else {
		line();
		printf("#                                                           #\n"
				   "#      Não foram encontrados arquvios salvos no diretório.  #\n"
					 "#                                                           #\n");
		line();
		printf("Continuar -> \n");
		getchar();
	}
do { // Início do menu principal
 	if(sair == 's' || sair == 'S') {
		clear();
		line();
		printf("#                    MENU PRINCIPAL                         #\n");
		line();
    printf("#---|-------------------------------------------------------#\n"
           "# 1 |-> Inserir dispositivo IOT (@)                         #\n"
           "#---|-------------------------------------------------------#\n"
           "# 2 |-> Alterar informações (@)                             #\n"
           "#---|-------------------------------------------------------#\n"
           "# 3 |-> Visualizar informações (@)(*)                       #\n"
           "#---|-------------------------------------------------------#\n"
					 "# 4 |-> Salvar dados aos arquivos                           #\n"
					 "#---|-------------------------------------------------------#\n"
           "# 5 |-> Visualizar informações (*)                          #\n"
           "#---|-------------------------------------------------------#\n"
           "# 6 |-> Encerrar o programa                                 #\n"
           "#---|-------------------------------------------------------#\n");
		line();
		printf("=> ");
    scanf(" %d", &resp);
	}
	clear();
    switch(resp) {
		default:
			printf("VALOR INVÁLIDO!!\n");
			sair = menu();
		break;

		case 1:
      line();
      mgr = GetIotInfo();
      line();
			insert++;
			sair = menu();
		break;

		case 2:
		if(DadoAlterado > 0) {
			clear();
			printf("#                                                           #\n");
			printf("# Os dados ja foram alterados, não é possível fazer mais al #\n");
			printf("# terações.                                                 #\n");
			printf("# Voltando ao menu principal.                               #\n");
			printf("#                                                           #\n");
			sair = 's';
		}
      line();
			printf("#                 SUBMENU - Alterar Dados                   #\n");
			line();
			printf("#---|-------------------------------------------------------#\n"
						 "# 1 |-> Alterar nome (@)                                    #\n"
						 "#---|-------------------------------------------------------#\n"
						 "# 2 |-> Alterar informações (@)                             #\n"
						 "#---|-------------------------------------------------------#\n"
						 "# 3 |-> Alterar nome e informações (@)                      #\n"
						 "#---|-------------------------------------------------------#\n"
						 "# 4 |-> Alterar nome (*)                                    #\n"
						 "#---|-------------------------------------------------------#\n"
						 "# 5 |-> Alterar informações (*)                             #\n"
						 "#---|-------------------------------------------------------#\n"
						 "# 6 |-> Voltar ao menu principal                            #\n"
						 "#---|-------------------------------------------------------#\n");
			line();
			printf("=> ");
			scanf("%d", &resp2);

			switch(resp2) {
				case 1:
					clear();
					line();
					AlteraDados(mgr, 1);
					line();
					DadoAlterado += 1;
					line();
					sair = menu();
				break;
					
				case 2:
					clear();
					line();
					AlteraDados(mgr, 2);
					line();
					DadoAlterado += 2;
					line();
					sair = menu();
				break;

				case 3:
					clear();
					line();
					AlteraDados(mgr, 1);
					line();
					AlteraDados(mgr, 2);
					line();
					DadoAlterado += 3;
					sair = menu();
				break;
				
				case 4:
					clear();
					line();
					editn();
					line();
					printf("#           Conteúdo do arquivo com as alterações           #\n");
					FileRead(mgr, 1);
					line();
					sair = menu();
				break;
				
				case 5:
					clear();
					line();
					editf();
					line();
					printf("#           Conteúdo do arquivo com as alteraões            #\n");
					FileRead(mgr, 2);
					line();
					sair = menu();
				break;

				case 6:
					sair = menu();
				break;
			}
		break;

		case 3:
			clear();
			line();
			printf("#              SUBMENU - Visualizar Dados                   #\n");
			printf("#             Escolha qual informação gostaria              #\n");
      printf("#                      de visualizar                        #\n");
			line();
      printf("#---|-------------------------------------------------------#\n"
			       "# 1 |-> Nome do dispositivo (*)                             #\n"
             "#---|-------------------------------------------------------#\n"
			       "# 2 |-> Informações gerais (*)                              #\n"
             "#---|-------------------------------------------------------#\n"
			       "# 3 |-> Todos nos arquivos (*)                              #\n"
             "#---|-------------------------------------------------------#\n"
			       "# 4 |-> Nome dos dispositivos (@)                           #\n"
             "#---|-------------------------------------------------------#\n"
			       "# 5 |-> Informações gerais (@)                              #\n"
             "#---|-------------------------------------------------------#\n"
			       "# 6 |-> Todos nos dados (@)                                 #\n"
             "#---|-------------------------------------------------------#\n"
			       "# 7 |-> Voltar ao menu                                      #\n"
             "#---|-------------------------------------------------------#\n");
			line();
			printf("\n=> ");
			scanf(" %d", &resp3);

			clear();
			switch(resp3) {
				default:
					printf("VALOR INVALIDO!!\n");
					sair = menu();
				break;

				case 1:
          line();
 					printf("#                Nomes dos dispositivos                     #\n");
          printf("#                     nos arquivos                          #\n");
  			 	line();
					FileRead(mgr, 1);
          line();
					sair = menu();
				break;

				case 2:
          line();
					printf("#             Informações gerais nos arquivos               #\n");
          line();
					FileRead(mgr, 2);
					line();
					sair = menu();
				break;

				case 3:
          line();
					printf("#            Informações gerais e nomes nos arquivos        #\n");
          line();
					FileRead(mgr, 3);
					line();
					sair = menu();
				break;
        
        case 4:
          line();
          printf("#                  Nomes dos dispositivos                   #\n");
          printf("#                       (não salvos)                        #\n");
					if(DadoAlterado > 0) {
						ShowData(mgr, 3);
					} else {
				    ShowData(mgr, 1);
					}
          line();
          sair = menu();
        break;

        case 5:
          line();
          printf("#                Informações gerais (não salvas)            #\n");
          line();
					if(DadoAlterado > 0) {
						ShowData(mgr, 4);
					} else {
						ShowData(mgr, 2);
					}
          line();
          sair = menu();
        break;
        
        case 6:
          line();
          printf("#                 Informações gerais e nomes                #\n");
          printf("#                        (não salvos)                       #\n");
          line();
					if(DadoAlterado > 0) {
						ShowData(mgr, 6);
					} else {
	          ShowData(mgr, 5);
					}
          line();
          sair = menu();
				case 7:
					sair = menu();
			}
		// Fim do case 2: do switch(resp)
		break;
    case 4:
      line(); 
      printf("#           Salvando informações aos arquivos!!...          #\n");
	//		if(DadoAlterado > 0) {
	//			FileInsert(mgr, DadoAlterado);
	//		} else {
				FileInsert(mgr, 5);
	//		}
			printf("#                     Dados Salvos!!!                       #\n");
      line();
			salvo++;
			sair = menu();
    break;

		case 5:
			line();
			FileRead(mgr, 3);
			line();
			sair = menu();
		break;

		case 6:
      if(salvo == 0 || insert == 0) {
				printf("Erro!! os dados não foram salvos ou não houve uso do sistema...\n");
				printf("Se quiser encerrar o programa digite 'n' ou 'N'\n");
        printf("Se digitar a letra 's' ou 'S' retornará para o menu principal\n");
				sair = menu();
			} else {
        exit(EXIT_SUCCESS);
			}
      if(sair == 'n' || sair == 'N') {
				exit(EXIT_SUCCESS);
			}
		break;
	}// Fim do switch(resp)
	}while(sair != 'n' || sair != 'N');
    return EXIT_SUCCESS;
}// Fim do main()
