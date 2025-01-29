#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){

        int pid = fork();
        int stat;
        if(pid==0)
        {
                printf("Child PROCESS STARTED\n");
                char *args[2];
                args[1] = "/bin/ls";
                args[2] = NULL;
                int exitstat = execl("/bin/ls" ,"/bin.ls",NULL);
                exit(0);
                printf("New file executed sucessfully\n");
        }
        else
        {
                wait(NULL);
                printf("\nPARENT PROCESS STARTED\n");
                printf("Done\n");
                return 0;
        }

}