#include<stdio.h>
#include<stdlib.h>

void cd(const char *path)
{
char command[1024];
snprintf(command,sizeof(command), "cd %s", path);
int ret= system(command);
if(ret==-1)
{
	perror("system");
}
else{
	printf("changed directory to: %s\n",path);
}
}

int main(int argc, char *argv[])
{
	if (argc=2){
		fprintf(stderr, "Usage:%s <directory>\n", argv[0]);
		exit(EXIT_FAILURE);
		}
		cd(argv[1]);
		return 0;
}

