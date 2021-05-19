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
