# StorageControl
StorageControl project for the discipline of Software Engineering 

to compile just run: `make` on the current directory and then `./StorageControl` to run.
Or even just copy and paste this `make && ./StorageControl`. This should compile and run.

# Dependencies
   dependencies |  Operational systems
  ------------- | ---------------------
  Nano          | Unix-like
  Notepad       | Windows
  gcc           | Unix-Like/Windows
  make          | Unix-like/Windows
 
              
# Main functionalities
  * Create files `.txt` to store the input given for the user;
  * Change the user input (It's possible to change just ONE TIME);
  * Visualize the user input;
  * Visualize the content of especific files;
  * Save the input to the files;
  * Visualize the content of all files at e time;
  * Finish the program.
  
# Some problems found
  * As mentioned earlier, it is possible to change the content of an input JUST ONE TIME
      That is because the actuall code works storing the 'input change' in another variable.
      So the code has four principle variables: *nome_iot*, *nomeAlterado*, *info_iot*, *infoAlterado*. The variables with `_iot` terminating are used to store the user input and the others input are just to store the new input of the user, which must be used on the place of `_iot`;
  * The only way to change the texts contents in the files are using just the Notepad on windows and Nano on unix-like;
  * For while it's not possible to delete a file using the program;
  * When the option to return to the main menu is selected (**SOME TIMES**) the message *Gostaria de voltar ao menu principal? [S]im / [N]ão* it showed twice, sou you need to select your option twice.**FOR THE LOVE OF GOD, DO NOT MAKE DIFFERENTS OPTIONS AT ONCE!! like: on the first time you press `s` but on second time you press `n`.**
 
# Some Description of each files
**~~As you may know, the .h files are the headers~~**

* **ansi_escapes**: is responsable for integrating colorfull text on either linux and windows. (It's not actually needed because the code doesn't have any color, but on the future probably have);
* **scontrol_fc**: where all the main functions are located. The functions responsible for take the inut, create the files, insert a text to the files, read the files and change the input given before in execution time or in the files;
* **StorageControl**: the main.c file. Must compile this file to run the program. Is where the menus and submenus are located;
* **makefile**: in this case a simple gcc flags to compile linking the external lib and generate the bin file.

# The same as above but in Brazilian Portuguese

# StorageControl
Projeto StorageControl para a disciplina de Engenharia de Software.

Para compilar apenas execute: `make` no diretório atual do projeto e então `./StorageControl` para executar o programa.
Ou somente copie e cole este comando `make && ./StorageControl`. Esse comando deve compilar e executar.

# Dependências
   dependências |  Sistema Operacional
  ------------- | ---------------------
  Nano          | Unix-like
  Notepad       | Windows
  gcc           | Unix-Like/Windows
  make          | Unix-like/Windows
 
              
# Principais funcionalidades
  * Criar arquivos do tipo `.txt` para armazenar as entradas de dados do usuário;
  * Mudar as entradas do usuário. (Só é possível alterar somente UMA VEZ);
  * Visualizar os dados digitados;
  * Visualizar o conteúdo de ambos os arquivos ou dor arquivos específicos;
  * Salvar os dados nos arquivos;
  * Óbviamente encerrar o programa.
  
# Alguns problemas encontrados
  * Como mencionado anteriormente é possível alterar o conteúdo somente UMA VEZ.
      Isso acontece porque o código armazena os "dados alterados" em outras variáveis.
      Então o código tem 4 variáveis principais: *nome_iot*, *nomAlterado*, info_iot*, *infoAlterado*. As variáveis com `_iot` são usadas para armazenar a entrada do usuário (as principais) e as outras armazenam a entrada "alterada" .
  * A única forma de de mudar o conteúdo dos arquivos é usando o Notepad no windows e Nano para sistemas unix-like;
  * Por enquanto não é possível deletar um arquivo utilizando o progama;
  * Quando a opção para retornar ao menu principal é selecionada (***ALGUMAS VEZES***) a mensagem *Gostaria de voltar ao menu principal? [S]im / [N]ão* é mostrada duas vezes, então é necessário selecionar sua opção duas vezes. **NÃO FAÇA DIFERENTES ESCOLHAS DE UMA VEZ!! Como: na primeira vez voce seleciona `s` mas na segunda voce seleciona `n`**, isso resultará no possível travamento do sistema e até mesmo a parada forçada do mesmo.
 
# Descrição de cada arquivo
**~~Commo você talvez saiba, os arquivos .h são headers~~**

* **ansi_escapes**: é responsável por entregar saídas de texto coloridas no windows e linux. (Atualmente não é necessário porque o programa não possui cores, mas no futuro provavelmente terá);
* **scontrol_fc**: onde todas as funções principais são armazenadas. As funções responsáveis por pegar as entradas do usuário, criar os arquivos, inserir os dados no arquivos, ler os arquivos e mudar o conteúdo deles e da entrade em tempo de execução;
* **StorageControl**: o arquivo main.c. Deve-se compilar esse arquivo. é onde os menus e submenus estão localizados;
* **makefile**: nesse caso um simples arquivo com as flags do gcc para compilação. Essas flags são o que geram o executável.
