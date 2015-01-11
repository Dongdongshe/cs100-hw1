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
while(1)
	{
		printf("rshell>");
        
        fflush(NULL);

        if(!fgets(line, 1024, stdin))
        	return 0;
		char * cmd = line;
		cmd = strtok(line, " ");
		int i = 0;
		while (cmd != NULL){
			args[i] = cmd;
			printf("%s\n", args[i]);
			++i;
			cmd = strtok(NULL, " ");}
			args[i] = NULL;

		int pid = fork();
		if(pid == -1){
			perror("sdf");
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
	return 0;
}
