#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv) 
{
	
	int childpid;
	const int SIZE = 512;
	char line[SIZE];
	char * cmd;
	char pch;

	while (1)
	{
		cout << "rshell->";
		if(cmd = cin.getline(line, SIZE))
		{
			errno = 0;
			if(strcmp(cmd, "cd" == 0)
			{
				char * arg = strtok(NULL, SIZE);
				
				if 
				
//		while (pch != NULL)
//		{
//			printf("%s\n", pch);
//			pch = strtok(NULL, " ");
//		}
		string cmd = *pch;
		if(cmd.compare("exit") == 0)
		{
			return 0;
		}
	}
	return 0;
}



