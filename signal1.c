#Child process was keep printing then KILL function send a signal SIGKILL after 1 second then the child process got killed

#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<sys/wait.h>
int main()
{
        int pid = fork();

        if(pid == 0)
        {
                while(1)
                {
                        printf("Hello From Child.\n");
                }

        }
        else
        {
                sleep(1);
                kill(pid,SIGKILL);
                wait(NULL);
        }


        return 0;
}
