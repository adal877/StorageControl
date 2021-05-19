# StorageControl
StorageControl project for the discipline of Software Engineering 

to compile just run: `make` on the current directory and then `./StorageControl` to run.
Or even just copy and paste this `make && ./StorageControl`. This should compile and run.

# Some Description of each files
*ansi_escapes*: is responsable for integrating colorfull text on either linux and windows. (It's not actually needed because the code doesn't have any color, but on the future probably have)

*scontrol_fc*: where all the main functions are located. The functions responsible for take the inut, create the files, insert a text to the files, read the files and change the input given before in execution time or in the files.

*StorageControl*: the main.c file. Must compile this file to run the program. Is where the menus and submenus are located.

*makefile*: in this case a simple gcc flags to compile linking the external lib and generate the bin file.
