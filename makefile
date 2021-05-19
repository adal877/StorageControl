StorageControl: StorageControl.c scontrol.h ansi_escapes.h
	gcc -Wall -fasynchronous-unwind-tables -fstack-clash-protection -g3 -O2 -Werror=format-security ansi_escapes.c scontrol_fc.c StorageControl.c -o StorageControl


