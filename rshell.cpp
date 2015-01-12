#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

using namespace std;

int main(int argc, char **argv) 
{
	
	int childpid;
	const int SIZE = 512;
	char line[SIZE];
	char * cmd;
	char pch;
	char *delimiters;

	while (1)
	{
		printf("rshell->");
		fflush(NULL);

		if(!fgets(line, SIZE,stdin)) break;
		
		delimiters = "||";

		cmd = strtok(line, " ");
		printf("%s\n", cmd);
		
			if(strcmp(cmd, "cd") == 0)
			{
				printf("cd command");
				char * arg = strtok(NULL, " ");
				printf("%s\n", arg);
				if (!arg) fprintf(stderr, "cd missing argument.\n");
			     else chdir(arg);
			}	
//		while (pch != NULL)
//		{
//			printf("%s\n", pch);
//			pch = strtok(NULL, " ");
//		}
		else if(strcmp(cmd, "exit") == 0) {
			printf("exit");
			exit(0);}
		else cout << "excute command here.";
	    }
	return 0;
}



