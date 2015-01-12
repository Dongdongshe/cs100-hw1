#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

using namespace std;
int main(int argc, char **argv, char **envp)
{
char line[1024];
char *args[512];
//char *de
while(1)
	{
		printf("rshell>");
        
        fflush(NULL);

	//	de = "||";
        if(!fgets(line, 1024, stdin))
        	return 0;
		char * cut = line;
		cut = strtok(line, "#");
		char * cmd = cut;
		cmd = strtok(cmd, " \n");
		int i = 0;
		while (cmd != NULL){
			args[i] = cmd;
			printf("%s\n", args[i]);
			++i;
			cmd = strtok(NULL, " \n");}
		//	args[i] = NULL;
		if (strcmp(args[0], "exit") == 0) exit(0);
		else {
		int pid = fork();
		if(pid == -1){
			perror("sdf");
			printf("error");
			exit(1);
		}
		else if (pid == 0)
		 {
			if(execvp(args[0], args) == -1){
				printf("%s: %s\n", args[0], "command not found");
		        exit(1);				}											 }
	     else {
	     	 wait(NULL);
	     }
	}
	}
	return 0;
}
